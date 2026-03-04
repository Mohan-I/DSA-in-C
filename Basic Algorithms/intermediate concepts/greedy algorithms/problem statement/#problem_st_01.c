/*
    Problem statement : We need to make change for n coins (for eg. 39, 45) of denominations {1,2,5,10} using fewest number of coins.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int change;
    printf("Enter Initail Change Amount: ");
    scanf("%d", &change);

    int coins[] = {10,5,2,1};
    int amount = 0, i = 0, x, sum = change;

    while(amount != change){
        if(sum < 0){
            // For error handling for negative values like -1, -4 etc.
            printf("The Transaction is Not Applicable for %d value !", sum);
            break;
        }

        if(sum < coins[i]) i++; // if change is lesser than largest coin (i.e. coin unit: coins[])
        x = sum / coins[i];
        sum %= coins[i];
        amount += (x * coins[i]);
        // sum = sum - amount;

        printf("| Coin(%d)\tx %d \n", coins[i], x);

        if(amount == change){
            printf("----------------------\nThe Transaction has been completed successfully !");
            break;
        }

    }

    return 0;
}