// What will be the output of the following ? : [Explanation of answer at line 54]

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter values of a & b: \n");
    scanf(" %d %d ", &a, &b);
    printf("a = %d b = %d", a, b);
    return 0;
}










































// Explanation :
/*
    Since spaces are given after and before double quotes in scanf() 
    we must apply a space, then two nums and again a space followed by 
    enter. The  printf() would then output the number that you entered.
*/










