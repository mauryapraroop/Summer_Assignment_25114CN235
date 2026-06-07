#include <stdio.h>

int main() {

    int n, i, isPrime;

    // Take input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Special cases
    if (n <= 1) {
        printf("%d is NOT a Prime Number\n", n);
        return 0;
    }

    // Assume prime until proven otherwise
    isPrime = 1;

    // Check divisors from 2 to n-1
    for (i = 2; i <= n - 1; i++) {
        if (n % i == 0) {       // found a divisor!
            isPrime = 0;         // it's not prime
            break;               // no need to check more
        }
    }

    // Announce result
    if (isPrime == 1)
        printf("%d is a Prime Number\n", n);
    else
        printf("%d is NOT a Prime Number\n", n);

    return 0;
}