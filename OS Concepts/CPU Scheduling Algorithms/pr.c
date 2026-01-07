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
    int n, i, current_time=0, completed = 0;
    printf("[Enter The number of Processes:]");
    scanf("%d", &n);

    struct Process p[n];

    for(i = 0; i < n; i++){
        p[i].id = i;
        printf("Enter Arrival Time of Processes:\t");
        scanf("%d", &p[i].at);
        printf("Enter Burst Time of Processes:\t");
        scanf("%d", &p[i].bt);
        p[i].completed = false;
    }

    while(completed != n){
        
    int idx = -1;
    int min_bt = 10000;
        for(i = 0; i < n; i++){
            if(p[i].bt <= current_time && !p[i].completed){
                if(p[i].bt < min_bt){
                min_bt = p[i].bt;
                idx = i;
                }
            }
            if(p[i].bt == min_bt){
                if(p[i].at < p[idx].at){
                    idx = i;
                }
            }
        }
        if(idx != -1){
        p[idx].ct = current_time + p[idx].bt;
        p[idx].tat = p[idx].ct - p[idx].at;
        p[idx].wt = p[idx].tat - p[idx].bt;
        current_time = p[idx].ct;
        p[idx].completed = true;
        completed++;
        }else{
            current_time++;
        }
    }
    

    printf("[Pr]\t[AT]\t[BT]\t[CT]\t[TAT]\t[WT]\n");
    for(i = 0; i <n ; i++ ){
        printf("[p%d]\t[%d]\t[%d]\t[%d]\t[%d]\t[%d]\n", p[i].id, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }
    return 0;
}