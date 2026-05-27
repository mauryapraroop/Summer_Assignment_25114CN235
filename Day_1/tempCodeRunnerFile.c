#include <stdio.h>

int main()
{
    int i, n;
    double fact = 1;
    printf("enter the number you want to print the factorial:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d is %d", n, fact);
    return 0;
}