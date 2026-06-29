#include <stdio.h>
int calculateSum(int n);
int main() {
    int n, total_sum;
    printf("Enter a positive integer (N): ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a natural number greater than or equal to 1.\n");
        return 1;
    }
    total_sum = calculateSum(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, total_sum);
    return 0;
}
int calculateSum(int n) {
    if (n == 1) {
        return 1; 
    } else {
        return n + calculateSum(n - 1);
    }
}