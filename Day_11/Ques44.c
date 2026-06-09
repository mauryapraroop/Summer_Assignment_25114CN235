#include<stdio.h>

long long factorial(int n)
{
    long long fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n;

    printf("enter the number you want to find the factorial:");
    scanf("%d",&n);

    printf("The Factorial of entered number is : %lld",factorial(n));

    return 0;
}