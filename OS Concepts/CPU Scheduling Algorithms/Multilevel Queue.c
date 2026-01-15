#include <stdio.h>

struct process {
    int id;
    int burst_time;
    int remaining_time;
    int priority; // 1 for High (RR), 2 for Low (FCFS)
};

int main() {
    int i, n, time_quantum, time = 0, completed = 0;
    struct process p[10];

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        p[i].id = i + 1;
        printf("Burst time and Priority (1-High, 2-Low) for P%d: ", i + 1);
        scanf("%d %d", &p[i].burst_time, &p[i].priority);
        p[i].remaining_time = p[i].burst_time;
    }

    printf("\nEnter Time Quantum for High Priority Queue (RR): ");
    scanf("%d", &time_quantum);

    printf("\nExecution Sequence:\n");

    // Process High Priority Queue (Queue 1) first using Round Robin
    while (completed < n) {
        int flag = 0; // Check if any High Priority process is pending
        
        for(i = 0; i < n; i++) {
            if(p[i].priority == 1 && p[i].remaining_time > 0) {
                flag = 1;
                if(p[i].remaining_time > time_quantum) {
                    time += time_quantum;
                    p[i].remaining_time -= time_quantum;
                    printf("P%d (RR) runs until time %d\n", p[i].id, time);
                } else {
                    time += p[i].remaining_time;
                    printf("P%d (RR) finished at time %d\n", p[i].id, time);
                    p[i].remaining_time = 0;
                    completed++;
                }
            }
        }

        // If no High Priority processes are left, process Low Priority (Queue 2) via FCFS
        if (flag == 0) {
            for(i = 0; i < n; i++) {
                if(p[i].priority == 2 && p[i].remaining_time > 0) {
                    time += p[i].remaining_time;
                    printf("P%d (FCFS) finished at time %d\n", p[i].id, time);
                    p[i].remaining_time = 0;
                    completed++;
                }
            }
        }
    }

    return 0;
}