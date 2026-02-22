// Determine BMI category

#include <stdio.h>

int main(){
    float wt, ht, bmi;
    printf("Enter Body Mass Index (BMI): \n");
    printf("\nEnter Weight in kg : ");
    scanf("%f", &wt);
    printf("\nEnter Height in ft : ");
    scanf("%f", &ht);
    bmi = wt/(ht * ht);

    printf("\n--------------------------------\n");
    printf("\nYou are at %f -> " , bmi);
    if(bmi < 15){
        printf("Starvation");
    }
    else if(bmi < 17.5){
        printf("Anorexic");
    }
    else if(bmi < 17.5){
        printf("Underweight");
    }
    else if(bmi < 18.5){
        printf("Ideal");
    }
    else if(bmi < 24.9){
        printf("Overweight");
    }
    else if(bmi < 25.9){
        printf("Obese");
    }
    else if(bmi < 30.9){
        printf("Obese");
    }
    else if(bmi < 40){
        printf("Morbidly Obese");
    }
    printf(" Category");

    return 0;
}

// UNDER PROGRESS