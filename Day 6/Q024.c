#include <stdio.h>

// Function declarations
double calculatePowerBasic(double base, int exp);
double calculatePowerOptimized(double base, int exp);

int main() {
    double base;
    int exp;

    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exp);

    printf("\n--- Results ---\n");
    printf("%g^%d (Basic Loop Method)    = %lf\n", base, exp, calculatePowerBasic(base, exp));
    printf("%g^%d (Binary Exponentiation) = %lf\n", base, exp, calculatePowerOptimized(base, exp));

    return 0;
}

// Method 1: Standard Loop Method 
// Time Complexity: O(n)
double calculatePowerBasic(double base, int exp) {
    double result = 1.0;
    // Work with the absolute value of the exponent
    int positive_exp = (exp < 0) ? -exp : exp;

    for (int i = 0; i < positive_exp; i++) {
        result *= base;
    }

    // If exponent was negative, invert the final result
    if (exp < 0) {
        return 1.0 / result;
    }
    return result;
}

// Method 2: Binary Exponentiation (Highly Efficient)
// Time Complexity: O(log n)
double calculatePowerOptimized(double base, int exp) {
    double result = 1.0;
    long long current_exp = exp; // Use long long to handle negation of INT_MIN cleanly

    if (current_exp < 0) {
        base = 1.0 / base;
        current_exp = -current_exp;
    }

    while (current_exp > 0) {
        // If the current exponent bit is odd, multiply the base into our result
        if (current_exp % 2 == 1) {
            result *= base;
        }
        base *= base;          // Square the base
        current_exp /= 2;      // Divide the exponent by 2
    }

    return result;
}