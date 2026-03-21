/*

Problem: The Binary Block Sum / Coding Blocks - Easy

Description: You are given two arrays, A and B, both of size N. These arrays represent segments of a binary number. 
However, the elements in the arrays can be either 1 or 2. 
- If an element is 1, it represents the binary bits 1. 
- If an element is 2, it represents the binary bits 10.

Your task is to concatenate the binary representations of all elements in array A to form one large binary number, and do the same for array B. 
Finally, calculate the sum of these two binary numbers and return the result in decimal (base-10) format.

Input Format
An integer N, representing the size of the arrays. N integers representing the elements of array A.
N integers representing the elements of array B.

Constraints
`1 <= N <= 30`
`A[i], B[i] ∈ {1, 2}`

The final sum will fit within a 64-bit integer (long long in C).

Test Cases
Test Case 1 (Your Example)

Input:
Terminal-------------------------------
1
2
1
----------------------------------------
Binary Conversion:`A = [2] → 10₂``B = [1] → 1₂`Addition: `10₂ + 1₂ = 110₂` (Concatenated as per problem logic)
Output: 6
Explanation: The problem treats the inputs as a sequence. `A` and `B` joined together form `110`, which is `6` in decimal.

Test Case 2 (Multiple Elements)

Input:
Terminal-------------------------------
2
1 1
1 1
----------------------------------------
Binary Conversion:`A = [1, 1] → 11₂` (Decimal 3)`B = [1, 1] → 11₂` (Decimal 3)
Output: 6
Explanation: `3 + 3 = 6`.

Test Case 3 (Mixed Elements)
Input:
Terminal-------------------------------
2
2 1
1 2
----------------------------------------
Binary Conversion:`A = [2, 1] → 10₂` and `1₂ → 101₂` (Decimal 5)`B = [1, 2] → 1₂` and '10₂ → 110₂' (Decimal 6)
Output: 11
Explanation: '5 + 6 = 11'.


*/

#include <stdio.h>

/**
 * LOGIC FUNCTION
 * Processes the arrays A and B to treat them as binary segments.
 */
void findNum(int N, int *A, int *B) {
    long long decimalA = 0;
    long long decimalB = 0;

    // Process Array A
    for (int i = 0; i < N; i++) {
        // Shift left and add current element
        // If A[i] is 2 (10 in binary), we shift twice. 
        // If A[i] is 1 (01 in binary), we shift once.
        if (A[i] == 2) {
            decimalA = (decimalA << 2) | A[i];
        } else {
            decimalA = (decimalA << 1) | A[i];
        }
    }

    // Process Array B
    for (int i = 0; i < N; i++) {
        if (B[i] == 2) {
            decimalB = (decimalB << 2) | B[i];
        } else {
            decimalB = (decimalB << 1) | B[i];
        }
    }

    // Calculate and print the final decimal sum
    long long result = decimalA + decimalB;
    printf("%lld\n", result);
}

/**
 * MAIN FUNCTION
 * Handles the input and test cases.
 */
int main() {
    int N;
    
    // Read the size of the arrays
    if (scanf("%d", &N) != 1) return 0;

    int A[N], B[N];

    // Read elements for Array A
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Read elements for Array B
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    // Call the logic function
    findNum(N, A, B);

    return 0;
}