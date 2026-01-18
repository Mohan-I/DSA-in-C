#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to find the unaccessed track which is at minimum distance from head
int findMin(int diff[], int n, int accessed[]) {
    int index = -1;
    int minimum = 1e9; // Initialize minimum with a large value

    for (int i = 0; i < n; i++) {
        if (!accessed[i] && abs(diff[i]) < minimum) {
            minimum = abs(diff[i]);
            index = i;
        }
    }
    return index;
}

// Function to calculate the absolute difference between head and tracks
void calculateDifference(int request[], int head, int diff[], int n) {
    for (int i = 0; i < n; i++) {
        diff[i] = head - request[i];
    }
}

void shortestSeekTimeFirst(int request[], int head, int n) {
    if (n == 0) {
        return;
    }

    int diff[n];
    int accessed[n]; // Boolean array to track accessed requests (0 for false, 1 for true)
    for (int i = 0; i < n; i++) {
        accessed[i] = 0;
    }

    int seekcount = 0;
    int seeksequence[n + 1];
    seeksequence[0] = head;

    for (int i = 0; i < n; i++) {
        calculateDifference(request, head, diff, n);
        int index = findMin(diff, n, accessed);

        accessed[index] = 1; // Mark track as accessed
        // Increase the total count
        seekcount += abs(diff[index]);
        // Accessed track is now new head
        head = request[index];
        seeksequence[i + 1] = head;
    }

    printf("Total number of seek operations = %d\n", seekcount);
    printf("Seek sequence is : \n");
    // Print the sequence
    for (int i = 0; i <= n; i++) {
        printf("%d\n", seeksequence[i]);
    }
}

int main() {
    // Example usage
    int n = 8;
    int proc[] = {98, 183, 37, 122, 14, 124, 65, 67}; // Array of disk track numbers
    int head = 53; // Initial position of the disk head

    shortestSeekTimeFirst(proc, head, n);

    return 0;
}
