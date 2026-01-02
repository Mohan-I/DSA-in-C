// 8. Check whether a string is a palindrome. 
#include <stdio.h>
#include <string.h>

void rev_String(char str[]){
    int left = 0;
    int right = strlen(str) - 1 ;
    char temp;

    while(left < right){
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main(){
    char text[20], myString[20];
    printf("Enter String:\t");
    scanf("%s", &text);
    strcpy(myString, text);
    rev_String(myString);

    printf("\nOriginal String: %s", text);
    printf("\nReverse String: %s", myString);

    if(strcmp(myString, text) == 0){
        printf("\nThe String is Palindrome !!");
    }else{
        printf("\nThe String is Not a Palindrome !!");
    }
    return 0;
}