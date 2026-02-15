// Write a program when a number is entered obtain its reverse form 
// and determine whether the original (default) and reversed number are equal or not.

#include <stdio.h>

int main(){
    int num, def_num, remainder, reverse = 0;
    printf(" Enter to reverse Number : ");
    scanf("%d", &num);
    def_num = num;
    
    while(num != 0){
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    
    if(reverse == def_num){
        printf("Both are palindrome");
    }else{
        printf("Both are not plaindrome");
    }
    
    return 0;
}