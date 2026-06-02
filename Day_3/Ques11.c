#include <stdio.h>

int main() {

    int a, b, i, gcd, min;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find the smaller of the two
    if (a < b)
        min = a;
    else
        min = b;

    gcd = 1;    // 1 always divides everything

    // Check every number from 1 to min
    for (i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;    // update — last common divisor found is the greatest
        }
    }

    printf("GCD of %d and %d = %d\n", a, b, gcd);

    return 0;
}