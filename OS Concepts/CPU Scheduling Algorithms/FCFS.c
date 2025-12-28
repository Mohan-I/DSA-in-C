#include <stdio.h>
#include <stdlib.h>

#define BLUE "\x1B[34m"
#define NORM "\x1B[0m"

int main(){
    int bt[20], wt[20], ct[20], at[20], tat[20], n, current_time = 0;

    printf("\n%s# CPU SCHEDULING ALGORITHM #%s",BLUE,NORM);

    printf("\nEnter the number of the processes:\t");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("\nEnter The Burst Time:\t");
        scanf("%d", &bt[i]);
        printf("\nEnter The Arrival Time:\t");
        scanf("%d", &at[i]);
        printf("%s\n-------------------\n%s",BLUE,NORM);
    }

    for(int i = 0; i <n; i++){

        if(current_time < at[i]){
            current_time = at[i];
        }

         // arrival = arrival + bt[i];
        ct[i] = current_time + bt[i];
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];

        current_time = ct[i];
    }

    printf("%s\n[Process]\t[bt]\t[at]\t[ct]\t[tat]\t[wt]%s",BLUE,NORM);
    for(int j=0; j<n;j++){
        printf("\n[p%d]\t\t[%d]\t[%d]\t[%d]\t[%d]\t[%d]",j,bt[j],at[j],ct[j],tat[j],wt[j]);
    }
    return 0;
}