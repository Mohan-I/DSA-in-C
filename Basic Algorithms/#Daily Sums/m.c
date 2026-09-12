#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int i = 0;

    // Post-increment: reads arr[0] (10), then increments i to 1
    printf("Post-increment item: %d\n", arr[i++]); 
    printf("Current i: %d\n", i); // Output: 1

    i = 0; // Reset i

    // Pre-increment: increments i to 1 first, then reads arr[1] (20)
    printf("Pre-increment item: %d\n", arr[++i]);  
    printf("Current i: %d\n", i); // Output: 1

    return 0;
}