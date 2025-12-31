#include <stdio.h>

int main() {
    int n, r;
    printf("Enter number of processes and resources: ");
    scanf("%d %d", &n, &r);

    int alloc[n][r], max[n][r], need[n][r];
    int avail[r], finish[n], safe[n];
    int i, j, k, count = 0;

    printf("Enter Allocation Matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < r; j++)
            scanf("%d", &alloc[i][j]);

    printf("Enter Maximum Matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < r; j++)
            scanf("%d", &max[i][j]);

    printf("Enter Available Resources:\n");
    for (j = 0; j < r; j++)
        scanf("%d", &avail[j]);


    for (i = 0; i < n; i++) {
        for (j = 0; j < r; j++)
            need[i][j] = max[i][j] - alloc[i][j];
        finish[i] = 0;
    }

    
    while (count < n) {
        int found = 0;
        for (i = 0; i < n; i++) {
            if (!finish[i]) {
                for (j = 0; j < r; j++)
                    if (need[i][j] > avail[j])
                        break;

                if (j == r) {
                    for (k = 0; k < r; k++)
                        avail[k] += alloc[i][k];
                    safe[count++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }
        if (!found) break;
    }

    if (count == n) {
        printf("\nSystem is in a SAFE state.\nSafe sequence: ");
        for (i = 0; i < n; i++)
            printf("P%d ", safe[i]);
    } else {
        printf("\nSystem is NOT in a safe state.\n");
    }

    return 0;
}