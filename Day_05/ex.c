#include <stdio.h>

int main() {

    int start, end, num, i, isPrime, count;

    // Take range input
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("\nPrime numbers between %d and %d:\n", start, end);

    count = 0;

    // Outer loop — visit every number in the range
    for (num = start; num <= end; num++) {

        // Skip numbers <= 1 (they are never prime)
        if (num <= 1) continue;

        // Reset flag for each new number — VERY IMPORTANT!
        isPrime = 1;

        // Inner loop — check if num has any divisor
        for (i = 2; i <= num - 1; i++) {
            if (num % i == 0) {      // divisor found!
                isPrime = 0;
                break;               // no need to check further
            }
        }

        // If no divisor found, num is prime
        if (isPrime == 1) {
            printf("%d ", num);
            count++;
        }
    }

    // Summary
    if (count == 0)
        printf("No prime numbers found in this range.");
    else
        printf("\n\nTotal prime numbers found: %d\n", count);

    return 0;
}