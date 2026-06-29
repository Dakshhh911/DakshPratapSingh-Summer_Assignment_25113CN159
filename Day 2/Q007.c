#include <stdio.h>

int main() {
    long long num, original_num;
    long long product = 1; // Initialized to 1 because multiplying by 0 results in 0
    int remainder;
    int has_digits = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    original_num = num;

    // Special Case: If the number is exactly 0, the product of its digits is 0
    if (num == 0) {
        product = 0;
    } else {
        // Handle negative numbers by converting to positive
        if (num < 0) {
            num = -num;
        }

        // Loop to extract digits and multiply them
        while (num > 0) {
            remainder = num % 10;   // Extract the last digit
            product *= remainder;   // Multiply it to our running product
            num = num / 10;         // Remove the last digit
        }
    }

    printf("The product of the digits of %lld is: %lld\n", original_num, product);

    return 0;
}