#include <stdio.h>

int main()
{
    int n, original, digit;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(n > 0)
    {
        int fact = 1;
        digit = n % 10;
        for(int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }

    if(sum == original)
    {
        printf("%d is a Strong Number", original);
    }
    else
    {
        printf("%d is NOT a Strong Number", original);
    }

    return 0;
}