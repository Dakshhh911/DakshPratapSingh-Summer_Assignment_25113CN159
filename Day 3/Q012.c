#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Keep the original values for final calculations and printing
    a = num1;
    b = num2;

    // Step 1: Find the GCD using the Euclidean Algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a; 

    // Step 2: Calculate LCM using the formula
    // We divide first to avoid potential integer overflow issues
    lcm = (num1 / gcd) * num2;

    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}