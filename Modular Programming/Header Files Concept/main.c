// (The Driver): The file that actually uses the functions.
#include <stdio.h>
#include "calc.h"

int main(){
    int a = 4, b = 2;
    printf("The Addition of Numbers : %d", add(a,b));
    printf("The Subtraction of Numbers : %d", subtract(a,b));
    return 0;
}