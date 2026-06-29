#include <stdio.h>
#include <math.h> // Required for the sqrt() function

int main() {
    int num;
    int is_prime = 1; // 1 means true (prime), 0 means false (not prime)

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Special cases: Numbers less than or equal to 1 are not prime
    if (num <= 1) {
        is_prime = 0;
    } else {
        // Optimization: Loop from 2 up to the square root of the number
        int limit = sqrt(num);
        for (int i = 2; i <= limit; i++) {
            if (num % i == 0) {
                is_prime = 0; // Found a factor, so it's not prime
                break;        // Exit the loop immediately to save time
            }
        }
    }

    // Output the result
    if (is_prime == 1) {
        printf("%d is a PRIME number.\n", num);
    } else {
        printf("%d is NOT a prime number (it is a composite number).\n", num);
    }

    // Note: If you are compiling this on Linux via terminal, 
    // remember to link the math library using: gcc program.c -lm
    return 0;
}