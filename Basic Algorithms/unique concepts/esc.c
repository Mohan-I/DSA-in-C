#include <stdio.h>

int main() {
    printf("Hello World");
    printf("\r");
    printf("Super");
    
    return 0;
}
/*
EXPLANATION : (Output - Super World)
In C programming, \r is the escape sequence for a Carriage Return (CR), 
which moves the output cursor back to the beginning of the current line without jumping down to a new line.

How it Works:
When a terminal encounters \r, it resets the printing position to column zero. Any text printed after \r will 
overwrite the characters that were already written on that same line.
*/ 