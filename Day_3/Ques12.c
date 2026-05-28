#include <stdio.h>

int main()
{
    int i, n, m;
    printf("enter the value of two numbers you want to print the LCM:");
    scanf("%d %d", &n, &m);
    printf("the least common multiple of %d and %d is:", n, m);
    for (i = 1; i <= n * m; i++)
    {
        if (i % n == 0 && i % m == 0)
        {
            printf("%d ", i);
            break;
        }
    }
    return 0;
}