// 6. Find the frequency of each element in an array.
#include <stdio.h>

int main(){
    int size, element ,sum = 0;
    printf("\n# Frequency calculator:\n Total Number of Elements :\t");
    scanf("%d", &size);
     int arr[size];
    
    for(int i=0;i < size; i++){
        printf("Enter Element %d:\t",i);
        scanf("%d", &element);
        sum += element;
        arr[i] = element;
    }
    printf("\nSUM :%d | SIZE : %d \n",sum,size);
    printf("\nFrequency: %d", sum / size);
}