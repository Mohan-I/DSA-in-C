#include <stdio.h>

// Function to calculate Mean Squared Error
double calculate_mse(double actual[], double predicted[], int n) {
    double sum_squared_error = 0.0;
    
    for (int i = 0; i < n; i++) {
        double error = actual[i] - predicted[i];
        sum_squared_error += error * error;
    }
    
    return sum_squared_error / n;
}

int main() {
    // Example data: Actual values vs Model Predictions
    double actual[] = {25.0, 30.0, 45.0, 50.0};
    double predicted[] = {23.5, 32.0, 41.0, 53.2};
    int n = sizeof(actual) / sizeof(actual[0]);

    double mse = calculate_mse(actual, predicted, n);
    
    printf("Mean Squared Error (MSE): %.4f\n", mse);

    return 0;
}
