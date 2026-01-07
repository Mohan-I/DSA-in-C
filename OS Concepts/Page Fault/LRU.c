#include <stdio.h>

int main() {
    int n, frames_count, page_faults = 0, current_time = 0;

    printf("Enter number of pages: ");
    scanf("%d", &n);
    int pages[n];

    printf("Enter reference string: ");
    for(int i = 0; i < n; i++) scanf("%d", &pages[i]);

    printf("Enter number of frames: ");
    scanf("%d", &frames_count);

    int frames[frames_count];
    int last_used[frames_count]; // Stores the "time" each frame was last accessed

    // Initialize frames as empty
    for(int i = 0; i < frames_count; i++) {
        frames[i] = -1;
        last_used[i] = 0;
    }

    printf("\n[LRU Execution Table]\n");

    for(int i = 0; i < n; i++) {
        int symbol = pages[i];
        int found = 0;
        current_time++; // Increment global time for every step

        // 1. Check for Page Hit
        for(int j = 0; j < frames_count; j++) {
            if(frames[j] == symbol) {
                found = 1;
                last_used[j] = current_time; // Update last used time on hit
                break;
            }
        }

        // 2. If Page Fault
        if(found == 0) {
            int replace_idx = 0;
            
            // Selection Logic: Find the frame with the MINIMUM last_used value
            int min_time = last_used[0];
            for(int j = 1; j < frames_count; j++) {
                if(last_used[j] < min_time) {
                    min_time = last_used[j];
                    replace_idx = j;
                }
            }

            frames[replace_idx] = symbol;
            last_used[replace_idx] = current_time; // Set time for the new page
            page_faults++;
        }

        // Visual Display
        printf("Page %d -> ", symbol);
        for(int j = 0; j < frames_count; j++) {
            if(frames[j] != -1) printf(" %d ", frames[j]);
            else printf(" - ");
        }
        printf(found ? "(Hit)\n" : "(Fault)\n");
    }

    printf("\nTotal Page Faults: %d\n", page_faults);
    return 0;
}