#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("\nArmstrong numbers between %d and %d are:\n", start, end);

    // Outer loop iterates through each number in the range
    for (int num = start; num <= end; num++) {
        // Skip negative numbers, as Armstrong definitions apply to positive integers
        if (num < 0) {
            continue;
        }

        int temp = num;
        int digits = 0;
        double sum = 0.0;

        // Step 1: Count the number of digits for the current 'num'
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num; // Reset temp to extract digits

        // Step 2: Extract digits and compute the sum of powers
        while (temp != 0) {
            int remainder = temp % 10;
            sum += round(pow(remainder, digits)); // round() prevents floating-point drops
            temp /= 10;
        }

        // Step 3: If the sum matches the current loop number, print it
        if ((int)sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n"); // Clear newline at the end of output

    // Note: If compiling via Linux terminal, link the math library: gcc program.c -lm
    return 0;
}