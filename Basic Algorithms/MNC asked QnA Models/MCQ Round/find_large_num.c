// C Program to find 
// Largest of three numbers
#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3;

    // condition for a is greatest
    if (a > b && a > c)
        printf("%d", a);

    // condition for b is greatest
    else if (b > a && b > c)
        printf("%d", b);

    // remaining conditions
    // c is greatest
    else
        printf("%d", c);

    return 0;
}