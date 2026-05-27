#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the number you want to print the table of: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}