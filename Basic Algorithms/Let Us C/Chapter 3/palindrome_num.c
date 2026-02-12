#include <stdio.h>
#include <stdbool.h>

int main(){
    int nums[4], digits, i;

    printf("Enter Number :\n");
    scanf("%d", &digits);

    while(1){
        bool equated = false;

        if(nums != '\0'){
            nums[i] = digits % 10;
            digits = digits / 10;
            equated = true;
            i++;
        }

        if(equated == false){
            break;
        }

    }

    return 0;
}