#include <stdio.h>
#include <stdbool.h>

struct Process{
    int id;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
    bool completed;
};

int main(){
    int n, completed = 0, current_time = 0;
    printf("\n#-- SJF CPU SCHEDULING ALGORITHM --#\n");
    printf("Enter Number of Processes:\t");
    scanf("%d", &n);

    struct Process p[n];

    for(int i = 0; i < n; i++){
        p[i].id = i;
        printf("Enter Arrival Time for %d :",i);
        scanf("%d", &p[i].at );
        printf("Enter Burst Time for %d :",i);
        scanf("%d", &p[i].bt );
        p[i].completed = false;
    }

    while(completed != n){
        int idx = -1;
        int min_bt = 10000;
        for(int i =0; i < n; i++){
            if(p[i].at <= current_time && !p[i].completed){
                if(p[i].bt < min_bt){
                    min_bt = p[i].bt;
                    idx = i;
                }
                if(p[i].bt == min_bt){
                    if(p[i].at < p[idx].at){
                        idx = i;
                    }
                }
            }
        }

        if(idx != -1){
            p[idx].ct = current_time + p[idx].bt;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;
            p[idx].completed = true;
            current_time = p[idx].ct;
            completed++;
        }else{
            current_time++;
        }
    }

    float total_tat = 0, total_wt = 0;
    printf("\n[PID]\t[AT]\t[BT]\t[CT]\t[TAT]\t[WT]\n");
    for(int i = 0; i < n; i++){
        printf("[p%d]\t[%d]\t[%d]\t[%d]\t[%d]\t[%d]\n", p[i].id, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
        total_tat += p[i].tat;
        total_wt += p[i].wt;
    }
    printf("\nAverage Turnaround Time: %.2f",total_tat / n);
    printf("\nAverage Waiting Time: %.2f",total_wt / n);

    return 0;
}