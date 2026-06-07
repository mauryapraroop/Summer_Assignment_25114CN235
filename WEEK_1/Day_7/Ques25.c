#include <stdio.h>

long long factorial(int n) {


    if (n == 0 || n == 1) {
        return 1;
    }

    return (long long)n * factorial(n - 1);
}

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return 0;
    }

    printf("%d! = %lld\n", n, factorial(n));

    return 0;
}