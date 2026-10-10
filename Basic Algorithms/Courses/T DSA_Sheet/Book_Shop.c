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

int findMaxPages(int i, int N, int budget, int prices[i], int pages[i]){
    if(i == N || budget == 0) return 0;

    if(prices[i] > budget){
        return findMaxPages(i + 1, N, budget, prices, pages);
    }

    int include = pages[i] + findMaxPages(i + 1, N, budget - prices[i], prices, pages);
    int exclude = findMaxPages( i + 1, N, budget, prices, pages);
    return (include > exclude)  ? include : exclude;
}

int main(){

    int N, budget;
    scanf("%d %d", &N, &budget);

    int prices[N]; int pages[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &prices[i] );
    }

    for(int i = 0; i < N; i++){
        scanf("%d", &pages[i]);
    }

    int result = findMaxPages(0, N, budget, prices, pages);
    printf("%d", result);
    return 0;
}