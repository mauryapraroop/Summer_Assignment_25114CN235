#include <stdio.h>

int main() {

    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // LCM is always >= the larger number
    // Start checking from the larger number upward
    lcm = (a > b) ? a : b;

    // Keep going until we find a number divisible by both
    while (1) {                        // infinite loop
        if (lcm % a == 0 && lcm % b == 0) {
            break;                     // found LCM — exit!
        }
        lcm++;                         // try next number
    }

    printf("LCM of %d and %d = %d\n", a, b, lcm);

    return 0;
}