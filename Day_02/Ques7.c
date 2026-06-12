#include <stdio.h>

int main()
{
    int n, i, product;
    printf("Enter the number you want to see the product:");
    scanf("%d", &n);
    printf("The product of the number is:\n");

    for (i = 1; i <= 10; i++)
    {
        product = n * i;
        printf(" %d * %d = %d\n", n, i, product);\
    }

    return 0;
}