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