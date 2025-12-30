#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int bt[20],wt[20],tat[20],at[20],ct[20], arrival_time = 0, process, current_time = 0;
    printf("\n#--SJF CPU SCHEDULING ALGORITHM--#\n");
    printf("\n[Enter Number of Processes]:\t");
    scanf("%d", &process);

    for(int i = 0; i < process; i++){
        printf("\nEnter Burst Time for process - p%d: \t",i);
        scanf("%d", &bt[i]);
        printf("\nEnter Arrival Time for process - p%d: \t",i);
        scanf("%d", &at[i]);
    }

    while(1){
        bool swapped = false;
        for(int i = 0; i < process; i++){
        if(bt[i] > bt[i + 1]){
            int temp =  bt[i + 1];
            bt[i + 1] = bt[i];
            bt[i] = temp;
            swapped = true;
        }
        if(at[i] > at[i + 1]){
            int temp =  at[i + 1];
            at[i + 1] = at[i];
            at[i] = temp;
            swapped = true;
        }
        } 
        if(swapped == false) {
            break;
        }
    }


    for(int i = 0; i < process - 1; i++){
        if(current_time < at[i]){
            current_time = at[i];
        }
        
        ct[i] = at[i] + bt[i];  
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];

        current_time = ct[i];
    }

    
    printf("\n[Process]\t[bt]\t[at]\t[ct]\t[tat]\t[wt]\n");
    for(int i = 0; i < process; i++){
        printf("\np%d\t\t[%d]\t[%d]\t[%d]\t[%d]\t[%d]",i,bt[i],at[i],ct[i],tat[i],wt[i]);
    }
}