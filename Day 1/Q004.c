#include <stdio.h>

int main() {
    long long num, original_num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Save the original number for the final print statement
    original_num = num;

    // Special Case: If the number is exactly 0, it has 1 digit
    if (num == 0) {
        count = 1;
    } else {
        // If the number is negative, make it positive for counting
        if (num < 0) {
            num = -num;
        }

        // Keep dividing by 10 until the number becomes 0
        while (num > 0) {
            num = num / 10; // Drops the last digit (e.g., 543 becomes 54)
            count++;        // Increment our digit count
        }
    }

    printf("The number %lld has %d digits.\n", original_num, count);

    return 0;
}