#include <stdio.h>

int* fn(int*y){
    int x = 27;
    *y = x * 4;
    return &x;
}

void main(){
    int* pA;
    int x, y = 25, z;
    z = y;
    pA = fn(&y);
    printf("X=%d,Y=%d,Z=%d", *pA, y, z);
}

/*

OUTPUT

Explanation: 


ANS : --

The output is undefined because *pA reads a dead stack location.

Typical output on most systems (no optimization):
X=27,Y=108,Z=25

But it could also be:
X=<garbage>,Y=108,Z=25

As per GCC compiler in Windows
```````
.\13 to 15.c: In function 'fn':
.\13 to 15.c:7:12: warning: function returns address of local variable [-Wreturn-local-addr]
     return &x;

```````
This is GCC (or a GCC-compatible compiler like MinGW/Clang) warning you that:
You are returning the address of a variable (x) that is local to the function fn, and that variable ceases to exist once the function returns.

FIX : 	Use static, malloc, or pass output pointer. 

*/ 