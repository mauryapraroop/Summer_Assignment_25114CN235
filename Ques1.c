#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("enter the numbers n you want sum of:");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum of first %d natural numbers is %d", n, sum);
     
    return 0;
}