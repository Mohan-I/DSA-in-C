/*
A steel is graded according to the following conditions:

(1) Hardness must be greater than 50
(2) Carbon content must be less than 0.7
(3) Tensile strength must be greater than 5600

The grades are as follows:

Grade is 10 if all three conditions are met
Grade is 09 if conditions (1) and (2) are met
Grade is 08 if conditions (2) and (2) are met
Grade is 07 if conditions (1) and (3) are met
Grade is 06 if only one condition is met
Grade is 05 if none of the conditions are met 

Write a program, which will require the user to give valuues of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel.
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){
    float hardness, carbon, tensile;
    printf("\nEnter the hardness level : ");
    scanf("%f", &hardness);
    printf("\nEnter the carbon rate : ");
    scanf("%f", &carbon);
    printf("\nEnter the tensile strength : ");
    scanf("%f", &tensile);
    
    printf("\n--------------\n");

    if(hardness > 50 && carbon < 0.7 && tensile > 5600){
        printf("Grade 10");
    }else if(hardness > 50 && carbon < 0.7){
        printf("Grade 09");
    }else if(carbon < 0.7 && tensile > 5600){
        printf("Grade 08");
    }else if(hardness > 50 && tensile > 5600){
        printf("Grade 07");
    }else if(hardness > 50 || carbon < 0.7 || tensile > 5600){
        printf("Grade 06");
    }else{
        printf("Grade 05");
    }
    return 0;
}