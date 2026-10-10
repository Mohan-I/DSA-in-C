#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int num_a = *((int *) a);
    int num_b = *((int *) b);

    if(num_a > num_b) return 1;
    if(num_a < num_b) return -1;
    return 0;
}

int main(){
    int arr[] = {4,6,7,8,4,2,1,3,4,5,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(int), compare);

    for(int i = 0; i < n; i++){
        printf("[%d]",arr[i]);
    }
}