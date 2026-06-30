#include <stdio.h>

// Function Declarations
int countSetBitsStandard(int n);
int countSetBitsKernighan(int n);

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\n--- Results ---\n");
    printf("Set bits (Standard Loop Method):   %d\n", countSetBitsStandard(num));
    printf("Set bits (Kernighan's Algorithm): %d\n", countSetBitsKernighan(num));

    return 0;
}

// Method 1: Standard Bitwise Shift Loop
// Checks the last bit, then shifts right. Runs once for EVERY bit (e.g., 32 times for a 32-bit int).
int countSetBitsStandard(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1); // If the rightmost bit is 1, add 1 to count
        n = n >> 1;       // Right shift by 1 bit to check the next position
    }
    return count;
}

// Method 2: Brian Kernighan’s Algorithm (Highly Efficient)
// This clever trick runs ONLY as many times as there are set bits!
int countSetBitsKernighan(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1); // This magical bitwise operation clears the lowest set bit
        count++;
    }
    return count;
}