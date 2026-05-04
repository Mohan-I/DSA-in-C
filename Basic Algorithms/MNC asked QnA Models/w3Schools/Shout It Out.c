/*
Practice C Strings: Shout It Out
Convert a string to uppercase and print its length.

Instructions
Read a word from input.

Print it in uppercase, then print its length:

[word in uppercase]
Length: [number]
Input used in test:
hello
Expected Output
HELLO
Length: 5
Reason: "hello" in uppercase is "HELLO" and it has 5 characters.
*/ 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[200];
    fgets(text, 200, stdin);
    for (int i = 0; text[i]; i++) { if (text[i] == '\n') { text[i] = 0; break; } }
    int len = strlen(text);

    // Print uppercase and length
  	for(int i = 0; i < len; i++){
      printf("%c", toupper(text[i]));
    }
  	printf("\nLength: %d", len);
    return 0;
}

