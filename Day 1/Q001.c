#include <stdio.h>

int main() {
    int n;
    int sum_formula = 0;
    int sum_loop = 0;

    // Ask the user for the value of N
    printf("Enter a positive integer (N): ");
    scanf("%d", &n);

    // Safety check: ensure the user entered a positive natural number
    if (n < 1) {
        printf("Please enter a natural number greater than or equal to 1.\n");
        return 1; 
    }

    // Method 1: Using the Mathematical Formula (Fastest)
    sum_formula = (n * (n + 1)) / 2;

    // Method 2: Using a For Loop (Step-by-Step)
    for (int i = 1; i <= n; i++) {
        sum_loop += i; // Adds current 'i' to the running total
    }

    // Displaying the results
    printf("\n--- Results ---\n");
    printf("Sum calculated using Formula: %d\n", sum_formula);
    printf("Sum calculated using Loop:    %d\n", sum_loop);

    return 0;
}