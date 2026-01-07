// Page Optimal Replacement
#include <stdio.h>

int main() {
    int n, frames_count, page_faults = 0;

    printf("Enter number of pages: ");
    scanf("%d", &n);
    int pages[n];

    printf("Enter reference string: ");
    for(int i = 0; i < n; i++) scanf("%d", &pages[i]);

    printf("Enter number of frames: ");
    scanf("%d", &frames_count);

    int frames[frames_count];
    for(int i = 0; i < frames_count; i++) frames[i] = -1;

    printf("\n[Optimal Execution Table]\n");

    for(int i = 0; i < n; i++) {
        int symbol = pages[i];
        int found = 0;

        // 1. Check for Hit
        for(int j = 0; j < frames_count; j++) {
            if(frames[j] == symbol) {
                found = 1;
                break;
            }
        }

        // 2. If Fault
        if(!found) {
            int replace_idx = -1;
            
            // First: Fill empty frames if any
            for(int j = 0; j < frames_count; j++) {
                if(frames[j] == -1) {
                    replace_idx = j;
                    break;
                }
            }

            // Second: If memory is full, look into the FUTURE
            if(replace_idx == -1) {
                int farthest = i; 
                for(int j = 0; j < frames_count; j++) {
                    int k;
                    // Look ahead in the pages array
                    for(k = i + 1; k < n; k++) {
                        if(frames[j] == pages[k]) break;
                    }
                    
                    // If a page is NEVER used again, it's the best one to replace
                    if(k == n) {
                        replace_idx = j;
                        break;
                    }
                    
                    // Otherwise, find the one used furthest in the future
                    if(k > farthest) {
                        farthest = k;
                        replace_idx = j;
                    }
                }
            }

            frames[replace_idx] = symbol;
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