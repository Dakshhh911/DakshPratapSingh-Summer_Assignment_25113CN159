#include <stdio.h>

// Function declaration
long long findNthFibonacci(int n);

int main() {
    int n;
    
    printf("Enter the position (N) of the Fibonacci term: ");
    scanf("%d", &n);

    // Safety check: sequence positions must be positive integers
    if (n < 1) {
        printf("Please enter a position greater than or equal to 1.\n");
        return 1;
    }

    long long result = findNthFibonacci(n);
    printf("The %dth Fibonacci term is: %lld\n", n, result);

    return 0;
}

// Recursive function definition
long long findNthFibonacci(int n) {
    // Base Cases
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    
    // Recursive Case
    return findNthFibonacci(n - 1) + findNthFibonacci(n - 2);
}