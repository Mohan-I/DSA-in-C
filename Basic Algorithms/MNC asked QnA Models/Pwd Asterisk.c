// Asked In Oracle

// [AIM] : To take input without it appearing on the screen (often called "masking" or "silent input"),
// you are usually looking for a way to disable terminal echo.

// [FURTHER ADDITION] : To replace the hidden characters with asterisks (e.g., ****) instead of just keeping it blank

#include <stdio.h>
#include <conio.h>

int main() {
    char password[50];
    char ch;
    int i = 0;

    printf("Enter password: ");

    while (1) {
        ch = _getch(); // Catch keypress without echoing

        if (ch == 13 || ch == 10) { // 13 is Carriage Return (Enter)
            password[i] = '\0';
            break;
        } else if (ch == 8) { // 8 is Backspace
            if (i > 0) {
                i--;
                printf("\b \b"); // Move cursor back, print space to erase, move back again
            }
        } else {
            password[i++] = ch;
            printf("*");
        }
    }

    printf("\nPassword captured safely.\n");
    return 0;
}