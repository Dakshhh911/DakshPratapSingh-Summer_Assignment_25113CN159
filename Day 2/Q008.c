#include <stdio.h>

int main() {
    long long num, original_num;
    long long reversed_num = 0;
    int remainder;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Save the original number before we modify it
    original_num = num;

    // Handle negative numbers: by definition, negative numbers are usually 
    // not considered palindromes due to the minus sign (e.g., -121 reversed is 121-)
    if (num < 0) {
        printf("%lld is NOT a palindrome number.\n", original_num);
        return 0;
    }

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;
        reversed_num = (reversed_num * 10) + remainder;
        num = num / 10;
    }

    // Compare the original number with its reversed counterpart
    if (original_num == reversed_num) {
        printf("%lld is a palindrome number.\n", original_num);
    } else {
        printf("%lld is NOT a palindrome number.\n", original_num);
    }

    return 0;
}