#include <stdio.h>

int fn(int *x, int n){
    *x = n;
    return (n + 100);
}

void main(){
    int x, y;
    y = fn(&x, 250);
    printf("OUTPUT:X=%d,Y=%d" + 3, x, y);
}





/*
Output
[_(a)_:X=_(b)_,Y=_(c)_]

a = ?
b = ?
c = ?

Explanation :
----------------------------------------------
This is a classic case of pointer arithmetic on a string literal combined with pass-by-reference.

int fn(int *x, int n){
    *x = n;          // writes n into the memory pointed to by x
    return (n + 100);
}

x is a pointer to int
n is an int
*x = n → stores n at the address x points to
returns n + 100
--------------------------------------------

int x, y;
y = fn(&x, 250);

&x → address of local variable x
n = 250
Inside fn:
*x = 250 → the caller's x is now 250
return 250 + 100 = 350
y = 350

So after the call:
x = 250
y = 350

--------------------------------------------
printf("OUTPUT X=%d,Y=%d" + 3, x, y);
                            ^
Adding 3 moves the pointer 3 characters forward

*/ 