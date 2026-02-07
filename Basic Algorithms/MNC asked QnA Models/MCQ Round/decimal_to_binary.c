#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Handle 0 separately
    if (decimal == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert to binary
    while (decimal > 0) {
        binary[i++] = decimal % 2; // Store remainder
        decimal /= 2;              // Divide quotient
    }

    // Output in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
