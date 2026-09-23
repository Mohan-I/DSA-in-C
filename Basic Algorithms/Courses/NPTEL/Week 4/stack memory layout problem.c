// stack memory layout problem


#include <stdio.h>

char grade(int attend, char acGrade, int th) {
    char gr = 'W';
    
    printf("\n--- Inside grade() function (Parameters & Local Variables) ---\n");
    printf("Address of local variable gr   : %p\n", (void*)&gr);
    printf("Address of parameter th        : %p\n", (void*)&th);
    printf("Address of parameter acGrade   : %p\n", (void*)&acGrade);
    printf("Address of parameter attend    : %p\n", (void*)&attend);
    
    if (attend > th)
        gr = acGrade;
    return gr;
}

int main() {
    int a, b;
    char c1, c2;
    
    printf("--- Inside main() function (Local Variables) ---\n");
    printf("Address of c2 (Base X)         : %p\n", (void*)&c2);
    printf("Address of c1                  : %p\n", (void*)&c1);
    printf("Address of b                   : %p\n", (void*)&b);
    printf("Address of a                   : %p\n", (void*)&a);
    
    // Call the function to inspect parameter stacking
    grade(10, 'A', 5);
    
    return 0;
}