#include <stdio.h>

// Helper function to calculate factorial of a single digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Save the original number for comparison later

    // Extract digits one by one and add their factorials
    while (num > 0) {
        remainder = num % 10;         // Get the last digit
        sum += factorial(remainder);  // Add its factorial to the running sum
        num = num / 10;               // Remove the last digit
    }

    // Check if the total sum matches the original number
    if (sum == originalNum && originalNum > 0) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}