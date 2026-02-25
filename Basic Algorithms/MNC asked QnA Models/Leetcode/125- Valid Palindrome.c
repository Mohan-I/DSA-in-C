/*

125. Valid Palindrome
Solved - Easy

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 
*/ 


#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while(left < right){
        if(!isalnum(s[left])){
            left++;
        }
        else if(!isalnum(s[right])){
            right--;
        }
        else{
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
    }
    return true;
}

int main(){
    char s[] = "race a car";
    bool status = isPalindrome(s);

    if(status == true){
        printf("It is a palindrome.");
    }else{
        printf("It is not a palindrome.");
    }

    return 0;
}