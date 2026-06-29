#include <stdio.h>

int main() {
    long long num, original_num;
    int sum = 0;
    int remainder;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Save the original number for the final print statement
    original_num = num;

    // If the number is negative, convert it to positive for digit extraction
    if (num < 0) {
        num = -num;
    }

    // Process each digit one by one
    while (num > 0) {
        remainder = num % 10; // Extract the last digit
        sum += remainder;     // Add the digit to our running total
        num = num / 10;       // Remove the last digit from the number
    }

    printf("The sum of the digits of %lld is: %d\n", original_num, sum);

    return 0;
}