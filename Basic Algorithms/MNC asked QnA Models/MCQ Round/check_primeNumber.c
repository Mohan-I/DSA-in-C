#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num){
    if(num <= 1) return false;

    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int main(){
    int num;
    printf("Enter No. to check : ");
    scanf("%d", &num);

    if(isPrime(num)){
        printf("It's a Prime Number");
    } else {
        printf("It's not a Prime Number");
    }

    return 0;
}