#include <stdio.h>

int main(){
    int num1 = 0, num2 = 1, a = 0;
    int nums[20];
    for(int i = 0; i < 10; i++ ){
        printf("%d, %d, ", num1, num2);
        nums[a++] = num1;
        nums[a++] = num2;

        num1 = num1 + num2;
        num2 = num1 + num2;
    }

    int findnum;
    printf("\n Enter Number to find its value: ");
    scanf("%d", &findnum);

    for(int i = 0; i < 20; i++){
        if(findnum == nums[i]){
            printf("\n The Number exists at %d", i);
        }
    }

    return 0;
}