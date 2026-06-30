#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    long long binary_num, original_binary;
    int decimal_num = 0;
    int base = 1; // Represents 2^0 initially, then doubles each step (2^1, 2^2, etc.)
    int remainder;

    printf("Enter a binary number (containing only 0s and 1s): ");
    scanf("%lld", &binary_num);

    original_binary = binary_num;

    while (binary_num > 0) {
        remainder = binary_num % 10; // Extract the last digit (0 or 1)
        
        // Safety validation: ensure the user entered a valid binary digit
        if (remainder != 0 && remainder != 1) {
            printf("Error: Input is not a valid binary number.\n");
            return 1;
        }

        decimal_num += remainder * base; // Add the positional value to our total
        binary_num = binary_num / 10;    // Drop the last digit
        base = base * 2;                // Increase base power to the next position (1 -> 2 -> 4 -> 8...)
    }

    printf("Binary number: %lld\n", original_binary);
    printf("Decimal equivalent: %d\n", decimal_num);

    return 0;
}