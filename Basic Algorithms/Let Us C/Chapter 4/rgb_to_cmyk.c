/*
    In digital world colors are specified in Red-Green-Blue (RGB) format, with values R, G, B varying on an integer scale from 0 to 255. 
    In print publishing the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format, with vales of C, M, Y and K varying on real scale 0.0 to 1.0 .
    Write a program that converts RGB color to CMYK color as per following formulae: 

    WHITE = Max (RED/ 255, GREEN/ 255, BLUE/ 255)

            / WHITE - RED / 255  \
    CYAN = | -------------------- |
            \     WHITE          /


               / WHITE - GREEN / 255  \
    MAGENTA = | ---------------------- |
               \     WHITE            /

    
              / WHITE - BLUE / 255  \
    YELLOW = | -------------------- -|
              \     WHITE           /

    BLACK = 1 - WHITE
    
    Note That if The RGB values that are all 0, then the CMY values are all 0 and the k value is 1.

*/

// Program for : Color Conversion from RGB to CMYK format

#include <stdio.h>

int main(){
    float red, green , blue;
    float white, cyan, magenta, yellow, black;
    float max;

    printf("\n Enter Red, Green, Blue values ( 0 to 255 ) :");
    scanf("%f %f %f", &red, &green, &blue);

    if(red == 0 && green == 0 && blue == 0){
        cyan = magenta = yellow = 0;
        black = 1;
    }else{
        red = red / 255;
        green = green / 255;
        blue = blue / 255;

        max = red;
        if(green > max) max = green;
        if(blue > max) max = blue;
        white = max;
    }
}