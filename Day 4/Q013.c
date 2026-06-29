#include <stdio.h>

int main() {
    // Hardcoded to generate exactly 20 terms automatically
    int terms = 20; 
    
    // Starting values for the sequence
    int t1 = 0, t2 = 1;
    
    // Calculate the third term ahead of the loop
    int nextTerm = t1 + t2;

    printf("Fibonacci Series (%d terms): \n", terms);

    // Print the first two terms manually
    printf("%d, %d", t1, t2);

    // Loop runs from the 3rd term up to the 20th term
    for (int i = 3; i <= terms; ++i) {
        printf(", %d", nextTerm);
        
        // Slide the values forward for the next calculation
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("\n");
    return 0;
}