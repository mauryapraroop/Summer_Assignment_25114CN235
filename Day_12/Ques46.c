#include<stdio.h>

int isArmstrong(int n)
{
    int original = n;
    int sum = 0;

    while(n > 0)
    {
        int digit = n % 10;

        sum = sum + digit*digit*digit;

        n = n / 10;
    }

    return sum == original;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(isArmstrong(n))
        printf("%d is an Armstrong Number\n",n);
    else
        printf("%d is NOT an Armstrong Number\n",n);

    return 0;
}