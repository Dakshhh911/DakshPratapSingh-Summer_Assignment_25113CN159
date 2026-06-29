#include <stdio.h>

int main() {
    long long num, original_num;
    long long reversed_num = 0;
    int remainder;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    original_num = num;

    // Handle negative numbers by tracking the sign
    int is_negative = 0;
    if (num < 0) {
        is_negative = 1;
        num = -num;
    }

    // Loop to reverse the digits
    while (num > 0) {
        remainder = num % 10;                     // 1. Extract the last digit
        reversed_num = (reversed_num * 10) + remainder; // 2. Shift left and add digit
        num = num / 10;                           // 3. Drop the last digit
    }

    // Restore the negative sign if the original number was negative
    if (is_negative) {
        reversed_num = -reversed_num;
    }

    printf("Original number: %lld\n", original_num);
    printf("Reversed number: %lld\n", reversed_num);

    return 0;
}