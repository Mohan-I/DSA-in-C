#include <stdio.h>
#include <math.h>

#define WIDTH 80   // Width of the graph in characters
#define HEIGHT 40  // Total pixel height (must be even, uses HEIGHT/2 lines)

// Helper structure to bundle RGB channels
typedef struct {
    unsigned char r, g, b;
} Pixel;

// The mathematical function we want to plot
float mathematical_function(float x) {
    return sinf(x) * cosf(x * 0.5f);
}

int main() {
    // 1. Allocate a virtual pixel buffer cleared to dark background pixels
    Pixel grid[HEIGHT][WIDTH];
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            grid[y][x] = (Pixel){20, 20, 25}; // Dark slate gray background
        }
    }

    // 2. Plot the function into the pixel buffer
    for (int x = 0; x < WIDTH; x++) {
        // Map terminal X (0 to WIDTH) to math X domain (-2*PI to 2*PI)
        float math_x = -2.0f * M_PI + ((float)x / WIDTH) * (4.0f * M_PI);
        float math_y = mathematical_function(math_x);

        // Map math Y range (-1.0 to 1.0) back to terminal Y pixels (0 to HEIGHT-1)
        // We invert Y because terminal row 0 is at the top, but math Y increases upward
        int pixel_y = (int)((1.0f - math_y) * 0.5f * (HEIGHT - 1));

        // Ensure the calculated point sits safely inside our viewport limits
        if (pixel_y >= 0 && pixel_y < HEIGHT) {
            // Paint the function plot line a bright cyan
            grid[pixel_y][x] = (Pixel){0, 255, 255}; 
        }
    }

    // 3. Render the pixel buffer using Unicode half-blocks
    // We step by 2 because each text character prints 2 vertical rows at once
    for (int y = 0; y < HEIGHT; y += 2) {
        for (int x = 0; x < WIDTH; x++) {
            Pixel top = grid[y][x];
            Pixel bottom = grid[y + 1][x];

            // \033[48;2;R;G;Bm -> Sets background color (maps to top half)
            // \033[38;2;R;G;Bm -> Sets foreground color (maps to bottom half)
            // \u2584 -> Unicode lower half block '▄'
            printf("\033[48;2;%d;%d;%dm\033[38;2;%d;%d;%dm\u2584", 
                   top.r, top.g, top.b, 
                   bottom.r, bottom.g, bottom.b);
        }
        // Reset styles and break to the next screen line
        printf("\033[0m\n");
    }

    return 0;
}
