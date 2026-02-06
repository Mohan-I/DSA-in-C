#include <stdio.h>

void fact(int val){
    int sum = 1;
    for(int i = 1; i <= val; i++){
        sum = sum * i;
    }
    printf("The Factorial Value of %d ! is : %d", val, sum);
}

int main(){
    int num;
    printf("Enter Factorial Num : ");
    scanf("%d", &num);

    fact(num);

    return 0;

}