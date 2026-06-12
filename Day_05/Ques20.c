#include <stdio.h>

int main()
{
    int n, i, j;
    int largest = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n-1; i++)
    {
        if(n % i == 0)
        {
            int isPrime = 1;
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1)
            {
                largest = i;
            }
        }
    }
    printf("Largest Prime Factor = %d", largest);

    return 0;
}