#include <stdio.h>

int main() {
    int n, frames_count, page_faults = 0, top = 0;

    // 1. Get Input
    printf("Enter number of pages in reference string: ");
    scanf("%d", &n);
    
    int pages[n];
    printf("Enter the reference string (space separated): ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &pages[i]);
    }

    printf("Enter number of frames: ");
    scanf("%d", &frames_count);

    // 2. Initialize memory (frames) with -1 (empty)
    int frames[frames_count];
    for(int i = 0; i < frames_count; i++) {
        frames[i] = -1;
    }

    printf("\nVisual Representation of Memory:\n");

    // 3. FIFO Logic
    for(int i = 0; i < n; i++) {
        int symbol = pages[i];
        int found = 0;

        // Check if page is already in memory (Page Hit)
        for(int j = 0; j < frames_count; j++) {
            if(frames[j] == symbol) {
                found = 1;
                break;
            }
        }

        // If not found (Page Fault)
        if(found == 0) {
            frames[top] = symbol;     // Replace the "oldest" spot
            top = (top + 1) % frames_count; // Circularly move to the next spot
            page_faults++;
        }

        // Print current state of frames
        printf("Page %d -> ", symbol);
        for(int j = 0; j < frames_count; j++) {
            if(frames[j] != -1)
                printf(" %d ", frames[j]);
            else
                printf(" - ");
        }
        if(found == 0) printf(" (Fault)");
        else printf(" (Hit)");
        printf("\n");
    }

    printf("\nTotal Page Faults: %d\n", page_faults);
    return 0;
}