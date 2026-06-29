#include <stdio.h>

int main() {
    int num;
    // We use 'unsigned long long' because factorials grow massive very quickly.
    // This allows us to hold much larger numbers than a standard 'int'.
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Error handling for negative numbers
    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop to calculate factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i; // Multiplies the current total by i
        }
        
        // %llu is the format specifier for unsigned long long
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}