#include <stdio.h>

int main()
{
    int n, m, i;
    printf("enter the two numbers you want to print the greatest common divisor:");
    scanf("%d", &n);
    scanf("%d", &m);
    printf("the greatest common divisor of %d and %d is:", n, m);
    for (i = 1; i <= n && i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}