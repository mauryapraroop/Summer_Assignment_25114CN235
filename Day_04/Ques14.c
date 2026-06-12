#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next, i;

    printf("Enter position: ");
    scanf("%d", &n);

    if(n == 1)
    {
        printf("0");
    }
    else if(n == 2)
    {
        printf("1");
    }
    else
    {
        for(i = 3; i <= n; i++)
        {
            next = first + second;
            first = second;
            second = next;
        }

        printf("Nth Fibonacci Number = %d", next);
    }

    return 0;
}