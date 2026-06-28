#include <stdio.h>
#include <math.h>

// Function to calculate the sigmoid value
double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

int main() {
    // Example test inputs
    double inputs[] = {-5.0, -2.0, 0.0, 2.0, 5.0};
    int length = sizeof(inputs) / sizeof(inputs[0]);

    printf("Input (x) -> Sigmoid Output (y)\n");
    printf("--------------------------------\n");
    
    for (int i = 0; i < length; i++) {
        double result = sigmoid(inputs[i]);
        printf("%8.2f -> %8.4f\n", inputs[i], result);
    }

    return 0;
}
