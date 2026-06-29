#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    int num, original_num, remainder, digits = 0;
    double result = 0.0; // Stored as double because pow() returns a double value

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num;

    // Step 1: Count the total number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num; // Reset temp back to the input number

    // Step 2: Extract each digit and calculate the sum of powers
    while (temp != 0) {
        remainder = temp % 10;
        
        // Use round() to prevent tiny floating-point rounding inaccuracies 
        // that sometimes happen when converting double results from pow() to int
        result += round(pow(remainder, digits));
        
        temp /= 10;
    }

    // Step 3: Check if the calculated sum matches the original input
    if ((int)result == original_num) {
        printf("%d is an Armstrong number.\n", original_num);
    } else {
        printf("%d is NOT an Armstrong number.\n", original_num);
    }

    return 0;
}