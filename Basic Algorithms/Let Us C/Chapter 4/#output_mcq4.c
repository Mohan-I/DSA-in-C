#include <stdio.h>

int main(){
    int p , sum = 1, a = 7;
    printf("Enter the number To find its Factorial : ");
    scanf("%d", &p);

    for(int i = 1; i <= p; i++){
        sum = sum * i;
    }

    printf("The factorial of number %d is %d", p , sum, a);
    return 0;
}