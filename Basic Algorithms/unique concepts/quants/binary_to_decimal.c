#include <stdio.h>
#include <conio.h>

int main() {
    char binary[25], ch;

    printf("Enter Binary Number (Press Enter When Completed): ");

    while(1){
        ch = getch();
        if(ch == '\r') break;

        printf("%c", ch);
        binary[n++] = ch;
    }

    binary[n] = '\0';          // CRITICAL: Null terminate the string
    printf("\n");

    int decimal = 0;

    for(int i = 0; binary[i] != '\0'; i++ ){
        int num = binary[i] - '0';

        decimal = (decimal << 1) | num;
    }

    printf("Decimal Value : %d", decimal);
    return 0;
}
