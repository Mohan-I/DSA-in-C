/*
Practice C Booleans: Password Check
Check if a password is long enough.

Instructions
Read a password from input.

If the password has 8 or more characters, print:

Valid
Otherwise, print:

Invalid
Input used in test:
hello
Expected Output
Invalid
Reason: "hello" has 5 characters, which is less than 8.
*/ 

#include <stdio.h>
#include <string.h>

int main() {
    char password[200];
    scanf("%s", password);
  
    // Check length and print

    if(strlen(password) < 8){
      printf("Invalid");
     }else{
      printf("Valid");
     }
    return 0;
}