#include <stdio.h>

int main() {
    int num;

    // Ask the user to input the number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("\n--- Multiplication Table for %d ---\n", num);

    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        // %d elements align formatting: num, i, and the product (num * i)
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}