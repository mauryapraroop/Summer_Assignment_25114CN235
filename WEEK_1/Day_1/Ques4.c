#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("enter the number you want to count the numbers of digits :");
    scanf("%d", &n);
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    printf("the number of digits in the entered number is %d", count);

    return 0;
}