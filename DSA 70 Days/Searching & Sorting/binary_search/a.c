// Online C compiler to run C program online
#include <stdio.h>

int sf(int arr[],int size, int target){
    int low = 0;
    int high = size - 1;
    
    while(low <= high){
        
    int mid = low + (high - low) / 2;
    if(arr[mid] == target){
        return mid;
    }
    if( arr[mid] < target){
        low = mid + 1;
    }else{
        high = mid - 1;
    }
    
    } return -1;
}

int main() {
    // Write C code here
int myData[] = {10, 23, 45, 70, 82, 99}; // Must be sorted
    int n = sizeof(myData) / sizeof(myData[0]);
    int target = 70;
    
    int result= sf(myData, n, target);
    
    if(result != -1)
        printf("Element Found at %d", result);
        else
        printf("Element Not Found");
    return 0;
}