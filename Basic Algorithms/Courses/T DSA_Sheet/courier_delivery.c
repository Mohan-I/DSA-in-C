#include <stdio.h>

int find(int N, int TD, int time[]){
    long long T = 1;

    while(1){
        long long sum = 0;
        for(int i = 0; i < N; i++){
            sum += (T / time[i]);
        }
        if(sum >= TD){
            return T;
        }
        T++;
    }
    return T;
}

int main(){
    long long N, t_deliveries;
    if( scanf("%lld", &N) != 1) return 0;
    if( scanf("%lld", &t_deliveries) != 1) return 0;

    int time[N];
    for(int i = 0; i < N; i++){
        scanf("%lld", &time[i]);
    }
    long long r_t = find(N, t_deliveries, time);
    printf("%lld", r_t);
    return 0;
}