#include <stdio.h>

void drawCircle(int r) {
    // Aspect ratio adjustment (characters are roughly twice as tall as they are wide)
    float aspect_ratio = 2.0; 
    
    // Thickness of the circle border
    float thickness = 0.5;

    for (int i = -r; i <= r; i++) {
        for (int j = (int)(-r * aspect_ratio); j <= (int)(r * aspect_ratio); j++) {
            
            // Adjust the horizontal coordinate for the aspect ratio
            float x = j / aspect_ratio;
            float y = i;
            
            // Calculate distance from center
            float distance = x * x + y * y;

            // Check if the point lies exactly on the curve/border
            if (distance >= (r - thickness) * (r - thickness) && 
                distance <= (r + thickness) * (r + thickness)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    // Larger radius (e.g., 10 or 15) provides a smoother curve
    drawCircle(10); 
    return 0;
}
