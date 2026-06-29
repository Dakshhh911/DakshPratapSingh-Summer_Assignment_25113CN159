#include <stdio.h>

int main() {
    long long num, original_num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    original_num = num;

    if (num == 0) {
        count = 1;
    } else {
        if (num < 0) {
            num = -num;
        }

        while (num > 0) {
            num = num / 10;
            count++;
        }
    }

    printf("The number %lld has %d digits.\n", original_num, count);

    return 0;
}