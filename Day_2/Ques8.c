#include <stdio.h>

int main()
{
    int n, temp, rev = 0, original;
    printf("Enter the number you want to reverse: ");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        temp = n % 10;
        rev = rev * 10 + temp;
        n = n / 10;
    }
    if (rev == original)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }

    return 0;
}