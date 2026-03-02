#include <stdio.h>

int main() {
    char str[20];

    // Using scanset in scanf 
    // to read until newline
    scanf("%[^\n]s", str);
    printf("%s", str);

    return 0;
}

// By default, scanf("%s", str) stops reading the moment it hits a space. If you type "Hello World", it only grabs "Hello". 
// The format "%[^\n]s" changes that behavior.

/*
Breaking down the Syntax The magic happens inside the brackets [], 
which define a Scan Set.
    %: The start of the format specifier.
    [: Start of the scan set.
    ^: This is a "NOT" operator (circumflex). It tells scanf to keep reading as long as it does not encounter the characters following it.
    \n: The newline character (the Enter key).
    ]: End of the scan set.
    s: Tells C to store the result as a string.
    
    In plain English: "Read every single character—including spaces and tabs—and stop only when the user presses Enter ($\n$)."
*/