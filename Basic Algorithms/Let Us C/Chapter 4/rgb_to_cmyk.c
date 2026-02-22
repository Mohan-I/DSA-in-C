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
#define BLK "\x1B[30m"
#define RED "\x1B[31m"
#define GRE "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define PIN "\x1B[35m"
#define AQU "\x1B[36m"
#define NRM "\x1B[0m"

int main(){
    float red, green , blue;
    float white, cyan, magenta, yellow, black;
    float max;

    printf("\n Enter %sRed, %sGreen, %sBlue %svalues ( 0 to 255 ) :\t",RED,GRE,BLU,NRM);
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

        cyan = (white - red)/ white;
        magenta = (white - green)/ white;
        yellow = (white - blue)/ white;
        black = 1 - white;
    }
    // Output
    printf("\n --- CMYK Result --- \n");
    printf(" [ professional software based CMYK values ] = %.0f%% %.0f%% %.0f%% %.0f%%\n", cyan*100, magenta*100, yellow*100, black*100);
    printf(" [ COMPUTATIONAL (mathematically) based CMYK values ] = %f %f %f %f\n", cyan, magenta, yellow, black);
    
    // Nothing much just provided the same code below for ease of use :
    printf(" %s[CYAN] = %.0f%%  \n", AQU, cyan*100);
    printf(" %s[MAGENTA] = %.0f%%  \n", PIN, magenta*100);
    printf(" %s[YELLOW] = %.0f%%  \n", YEL, yellow*100);
    printf(" %s[BLACK] = %.0f%%  \n", BLK, black*100);

    printf("%s\n",NRM);

    // Or use basic format like this:
    
    // printf("Cyan:    %.2f%%\n", cyan * 100);
    // printf("Magenta: %.2f%%\n", magenta * 100);
    // printf("Yellow:  %.2f%%\n", yellow * 100);
    // printf("Black:   %.2f%%\n", black * 100);
    return 0;
}

/*
    EXPLAINATION OF OUTPUT:
    ------------------------------------------------terminal-------------------------------------------------------------------------------------------------------------------
    Enter Red, Green, Blue values ( 0 to 255 ) :   255 256 56

    --- CMYK Result ---
    [ professional software based CMYK values ] = 0% 0% 78% -0%
    [ COMPUTATIONAL (mathematically) based CMYK values ] = 0.003906 0.000000 0.781250 -0.003922
    [CYAN] = 0%
    [MAGENTA] = 0%
    [YELLOW] = 78%
    [BLACK] = -0%

    ------------------------------------------------terminal-------------------------------------------------------------------------------------------------------------------

    The values above code calculated ($0.00$, $0.01$, $0.78$, $0.00$) are the True Mathematical CMYK values. 
    The result you might be expecting ($7, 1, 91, 0$) usually comes from professional software like Adobe Photoshop, which applies a "Color Profile" (like SWOP or Coated FOGRA).
*/