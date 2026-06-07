#include <stdio.h>

int main()
{
    int n, temp, rev=0;
    printf("enter the number you want to reverse :");
    scanf("%d", &n); 
    while (n != 0)
    {
        temp = n % 10;
        rev = rev * 10 + temp;
        n = n / 10;
    } 
    printf("the reverse of the number is: %d", rev);
    return 0;
}   