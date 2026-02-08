// Temperature of city in Farenheit degrees in input through the keyboard.
//  WAP to convert this temperature into Centigrade degrees.

#include <stdio.h>

int main(){
    float fr, ct;
    printf("Enter Farenhiet Degree - F :");
    scanf("%f",&fr);

    ct = (fr - 32) / 1.8 ;

    printf("The Centigrade Degree - C : %f",ct);
    return 0;
}