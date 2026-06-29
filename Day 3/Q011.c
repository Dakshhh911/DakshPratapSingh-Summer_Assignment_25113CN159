#include <stdio.h>

int main() {
    int num1, num2, a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Keep the original values for the final print statement
    a = num1;
    b = num2;

    // Euclidean Algorithm using a while loop
    while (b != 0) {
        temp = b;
        b = a % b; // Get the remainder of a divided by b
        a = temp;  // Update a to be the old value of b
    }

    // The result is stored in 'a' once 'b' becomes 0
    printf("The GCD of %d and %d is: %d\n", num1, num2, a);

    return 0;
}