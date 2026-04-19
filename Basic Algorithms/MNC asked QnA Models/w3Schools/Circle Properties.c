/*
Practice C Variables: Circle Properties
Calculate the circumference and area of a circle.

Instructions
Read a radius from input.

Calculate the circumference and area of the circle:

Area = pi × radius × radius
Circumference = 2 × pi × radius
Print the results with two decimal places:

Area: [result]
Circumference: [result]
Input used in test:
5
Expected Output
Area: 78.54
Circumference: 31.42
Reason: pi × 5 × 5 = 78.54. 2 × pi × 5 = 31.42
*/
#include <stdio.h>
#define _USE_MATH_DEFINES
#ifndef M_PI
#define M_PI 3.14159265358979323846
#include <math.h> // It should be blow math defines like M_PI for execution 
#endif

int main() {
    double radius;
    scanf("%lf", &radius);

    // Calculate and print
  	float Area, Circumference;
  	Area = M_PI * radius * radius;
  	Circumference = 2 * M_PI * radius;
  	printf("Area: %.2f\n", Area);  	
  	printf("Circumference: %.2f", Circumference);
    return 0;
}
