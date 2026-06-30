#include <stdio.h>

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary equivalent: ");
    
    // Start from the 31st bit position and work down to 0
    int started_printing = 0;
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1; // Shift bit to the 0th position and check if it's 1 or 0
        
        if (bit == 1) {
            started_printing = 1; // Skip leading zeros for readability
        }
        
        if (started_printing) {
            printf("%d", bit);
        }
    }
    
    if (!started_printing) printf("0"); // If number was exactly 0
    printf("\n");

    return 0;
}