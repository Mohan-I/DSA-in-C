#include <stdio.h>

int main(){
    int i = 1, move_count = 0, num;
    printf("Enter The No. of Soilders: ");
    scanf("%d", &num);

    while(num >= 0){
        num = num - i;
        i = i + i;
        move_count++;
    }

    printf("\nThe Move Count :%d", move_count);
    return 0;
}