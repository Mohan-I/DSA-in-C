#include <stdio.h>
#include <string.h>

// Because fgets includes the "Enter" key (\n) in your string, if you print it, you'll see an extra line jump. 
// You can remove it with this one-liner:
int main() {
    char name[30];

    printf("Enter your full name: ");
    fgets(name, 30, stdin);

    // Remove the newline character that fgets adds
    name[strcspn(name, "\n")] = '\0';

    printf("Hello, %s! Nice to meet you.", name);

    return 0;
}