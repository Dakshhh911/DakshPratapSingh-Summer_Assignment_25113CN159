#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("\nPrime numbers between %d and %d are:\n", start, end);

    // Outer loop iterates through each number in the range
    for (int num = start; num <= end; num++) {
        
        // Skip numbers less than or equal to 1, as they are not prime
        if (num <= 1) {
            continue; 
        }

        int is_prime = 1; // Assume the number is prime
        int limit = sqrt(num);

        // Inner loop checks if 'num' has any divisors
        for (int i = 2; i <= limit; i++) {
            if (num % i == 0) {
                is_prime = 0; // Found a factor, not prime
                break;        // Stop checking this number immediately
            }
        }

        // If the inner loop finished and is_prime is still 1, print the number
        if (is_prime == 1) {
            printf("%d ", num);
        }
    }
    
    printf("\n"); // Print a final clean newline at the end

    return 0;
}