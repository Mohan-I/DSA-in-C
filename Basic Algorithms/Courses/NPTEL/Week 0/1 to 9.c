//  HINT : macro expansion is the key here — and it often surprises people.

#include <stdio.h>
#define ADD_FN(x, y) x + y

int fn_A(int x, int y){
    return (x + y);
}

int fn_A(int x, int y){
    return (x - y);
}

int fn(int x, int y){
    return x / y;
}

void main(){
    int x, y, z, w;
    x = 20;
    y = 30;
    z = fn(x , y);
    w = ADD_FN(x, y) * ADD_FN(z , x);
    printf("X=%d, Y=%d, Z=%d, W=%d",x,y,z,w);
}



// Will It result Compliation Error, if Yes then why ?
// Functions in C programs can return only integer values ?
// ADD_FN does not get compiled into a subroutine/function ?
// The size of first argument in printf ?
// Assuming that all compilation errors (if any) have been fixed in program and then executed. The output of the program would be
// X = _, Y = _, Z =_, W = _





// Explanation :

/*
x = 20;
y = 30;
z = fn(x, y);   // ----> fn(20, 30)
w = ADD_FN(x, y) * ADD_FN(z , x);

{----------------

The Value of W : w = ADD_FN(x, y) * ADD_FN(z , x);
The preprocessor does a pure textual substitution: w = x + y * z + x;
In case if you assumed (x + y) * (z + x) — This is NOT that's the trap!

Solve it using BODMAS step-by-step:
w = x + y * z + x;
w = x + (y * z) + x;
w = 20 + (30 * 0) + 20;
w = 20 + 0 + 20;
w = 40;
-----------------}


*/ 



