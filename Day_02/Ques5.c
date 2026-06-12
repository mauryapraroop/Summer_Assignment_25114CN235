#include <stdio.h>

int main()
{
    int n, digit, sum = 0;
    printf("enter the number you want calculate the sum:");
    scanf("%d", &n);
    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("the sum of digits is: %d", sum);

    return 0;
}