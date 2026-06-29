#include <stdio.h>

int main() {
    long long num, originalNum;
    long long maxPrime = -1;

    printf("Enter a number: ");
    scanf("%lld", &num);
    
    originalNum = num;

    // 1. Divide out all the 2s
    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }

    // 2. Divide out odd numbers starting from 3
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }

    // 3. If num is still greater than 2, then the remaining num is prime
    if (num > 2) {
        maxPrime = num;
    }

    // Output the result
    if (originalNum <= 1) {
        printf("Numbers less than or equal to 1 do not have prime factors.\n");
    } else {
        printf("The largest prime factor of %lld is: %lld\n", originalNum, maxPrime);
    }

    return 0;
}