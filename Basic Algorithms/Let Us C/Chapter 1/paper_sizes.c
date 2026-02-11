// Paper of size A0 has dimensions 1189 mm x 841 mm. 
// Each subssequent size A(n) is defined as A(n - 1) cut in half, parrallel to its shorter sides. 
// Write a program to calculate and print paper sizes A0, A1, A2, ....A8.

#include <stdio.h>

int main(){
    int a_wSize[8], a_hSize[8];
    a_wSize[0] = 1189, a_hSize[0] = 841;

    printf(" Size of First Paper : %d x %d \n", a_wSize[0], a_hSize[0]);

    for(int i = 1; i <= 8; i++){
        a_wSize[i] = a_wSize[i - 1], a_hSize[i] = a_hSize[i - 1] / 2; 
        printf(" Size of Paper after %d cut : %d x %d \n", i, a_wSize[i], a_hSize[i]);
    }
    return 0;
}