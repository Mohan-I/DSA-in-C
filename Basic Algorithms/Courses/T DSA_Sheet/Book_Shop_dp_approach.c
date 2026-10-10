/*
Problem Statement : Book Shop

Task:
You are in a book shop which sells n different books. You know the price and number of pages of each book.
You have decided that the total price of your purchases will be at most x. What is the maximum number of pages you can buy? You can buy each book at most once.

Input
The first input line contains two integers n and x: the number of books and the maximum total price.
The next line contains n integers h₁,h₂,....,h_n: the price of each book.
The last line contains n integers s₁,s₂,....,s_n: the number of pages of each book. ₁₂⩽

Output
Print one integer: the maximum number of pages.
Constraints

1 ⩽ n ⩽ 1000
1 ⩽ x ⩽ 10^5
1 ⩽ h_i, s_i ⩽ 1000

Example

Input:

4 10
4 8 5 3
5 12 8 1

Output: 13

Explanation: You can buy books 1 and 3. Their price is 4+5=9 and the number of pages is 5+8=13.
*/
#include <stdio.h>

// Utility function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to solve the bookshop knapsack problem
int maxPages(int n, int budget, int prices[], int pages[]) {
    // DP table where dp[i][w] stores the max pages with first i books and budget w
    int dp[n + 1][budget + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= budget; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (prices[i - 1] <= w) {
                dp[i][w] = max(pages[i - 1] + dp[i - 1][w - prices[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][budget];
}

int main() {
    int testcases;
    if (scanf("%d", &testcases) != 1) return 0;

    while (testcases--) {
        int n, budget;
        scanf("%d %d", &n, &budget);

        int prices[n];
        int pages[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &prices[i]);
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &pages[i]);
        }

        int result = maxPages(n, budget, prices, pages);
        printf("Output: %d\n", result);
    }

    return 0;
}