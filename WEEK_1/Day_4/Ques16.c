#include <stdio.h>

int main()
{
    int start, end, n, original, digit, sum;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    printf("Armstrong Numbers are:\n");

    for(n = start; n <= end; n++)
    {
        original = n;
        sum = 0;

        while(original != 0)
        {
            digit = original % 10;
            sum = sum + (digit * digit * digit);
            original = original / 10;
        }

        if(sum == n)
        {
            printf("%d\n", n);
        }
    }

    return 0;
}