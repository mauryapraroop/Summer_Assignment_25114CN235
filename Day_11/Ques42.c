#include<stdio.h>

int maximum(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int x,y;

    printf("ente rthe two number you want to find the maxium:");
    scanf("%d%d",&x,&y);

    printf(" The Maximum of two numbers %d",maximum(x,y));

    return 0;
}