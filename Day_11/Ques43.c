#include<stdio.h>

int isPrime(int n)
{
    int count=0;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count==2)
        return 1;

    return 0;
}

int main()
{
    int n;
    printf("Enter the number you want to check is Prime:");
    scanf("%d",&n);

    if(isPrime(n))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}