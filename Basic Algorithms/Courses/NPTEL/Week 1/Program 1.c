
#include <stdio.h>
#define ADD(X,Y) (X+Y)

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int divide(int x, int y) {
    return x / y;
}

int main() {
    int x = 20, y = 30, z, w;
    z = divide(x, y);
    w = ADD(x, y) * ADD(ADD(z, x), 0);
    printf("X=%d,Y=%d,Z=%d,W=%d", x, y, z, w);
}