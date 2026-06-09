#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int x,y;

    printf("enter two numbers you want to add:");
    scanf("%d%d",&x,&y);

    printf(" The sum of the entered two numbers is %d",sum(x,y));

    return 0;
}