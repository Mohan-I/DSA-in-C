#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    int b = x;
    int size = sizeof(x);
    int arr[size], rx = 0;
    for(int i = 0; i < size - 1; i++){
        arr[i] = x % 10;
        x /= 10;
    }
    // int rx = arr[0] * 10;
    for(int i = 0; i < size - 1; i++){
        if(arr[i] == 0){
            int temp = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = temp;
        }else{
        rx = rx * 10 + arr[i];
        }
        printf("%d %d\n",arr[i],rx);
    }
    if(rx == b){
        printf("true %d %d", rx, b);
    }else{
         printf("false%d %d", rx , b);
    }
}

int main(){
    
    int a = 10;
    isPalindrome(a);

    return 0;
}