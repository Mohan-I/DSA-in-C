#include <stdio.h>
#include <stdbool.h>

int main(){
    
    float hardness, carbon, tensile;
    printf("\nEnter the hardness level : ");
    scanf("%f", &hardness);
    printf("\nEnter the carbon rate : ");
    scanf("%f", &carbon);
    printf("\nEnter the tensile strength : ");
    scanf("%f", &tensile);
    
    printf("\n--------------\n");

    bool hardnessTrue = (hardness > 50);
    bool carbonRtTrue = (carbon< 0.7);
    bool tensile_True = (tensile > 5600);

    if(hardnessTrue && carbonRtTrue && tensile_True){
        printf("Grade 10");
    }else if(hardnessTrue && carbonRtTrue){
        printf("Grade 09");
    }else if(carbonRtTrue && tensile_True){
        printf("Grade 08");
    }else if(carbonRtTrue && tensile_True){
        printf("Grade 07");
    }else if(hardnessTrue || carbonRtTrue || tensile_True){
        printf("Grade 06");
    }else{
        printf("Grade 05");
    }

    return 0;
}