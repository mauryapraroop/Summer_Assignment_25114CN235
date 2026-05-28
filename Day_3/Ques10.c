#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the number of prime numbers you want to print:");
    scanf("%d", &n);

    printf("the prime numbers are:");
    for (i = 2; i <= n; i++)
    {
        int j, isPrime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}