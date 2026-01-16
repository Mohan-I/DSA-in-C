#include <stdio.h>
#include <stdlib.h>

void fcfs_disk_scheduling(int requests[], int n, int initial_head) {
    int total_head_movement = 0;
    int current_position = initial_head;

    printf("\n--- Disk Arm Movement Path ---\n");
    printf("%d", initial_head);

    for (int i = 0; i < n; i++) {
        // Calculate absolute distance: |current - target|
        int distance = abs(requests[i] - current_position);
        total_head_movement += distance;
        
        // Move the head to the new position
        current_position = requests[i];
        printf(" -> %d", current_position);
    }

    printf("\n\nTotal Head Movement: %d cylinders\n", total_head_movement);
    printf("Average Head Movement: %.2f cylinders\n", (float)total_head_movement / n);
}

int main() {
    // Example request queue
    int requests[] = {98, 183, 37, 122, 14, 124, 65, 67};
    int n = sizeof(requests) / sizeof(requests[0]);
    int initial_head = 53;

    printf("Initial head position: %d\n", initial_head);
    fcfs_disk_scheduling(requests, n, initial_head);

    return 0;
}