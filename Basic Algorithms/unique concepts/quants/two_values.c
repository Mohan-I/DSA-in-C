// If 15% of Y is equal to 21% of Z then what are their possible values

/*

                100 |             *     (100, 140)
                 80 |          *  
                 60 |       *  (50, 70)
                 40 |    *        
                 20 | * (10, 14)          
------------------0 +--------------------------
      (-5, -7)  *   0  20  40  60  80  100  120
                -20 |            
                -40 |            

*/ 


#include <stdio.h>

int main() {
    // Define Z as a floating-point number
    double z = 12.0;
    
    // Calculate Y using the derived ratio (Y = 1.4 * Z)
    double y = 1.4 * z;
    
    // Calculate both sides of the original equation for verification
    double left_side = 0.15 * y;
    double right_side = 0.21 * z;
    
    // Print the calculated values
    printf("Calculated Values:\n");
    printf("If Z = %.2f, then Y = %.2f\n\n", z, y);
    
    // Print the verification results
    printf("Verification:\n");
    printf("15%% of Y (0.15 * %.2f) = %.4f\n", y, left_side);
    printf("21%% of Z (0.21 * %.2f) = %.4f\n", z, right_side);
    
    return 0;
}
