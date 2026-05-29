#include <stdio.h>

int main()
{
    int n, i, f1 = 0, f2 = 1, f3;
    printf("enter the number of terms you want to print in the fibonacci series");
    scanf("%d", &n);
    printf("fibonacci series:");
    printf("%d %d ", f1, f2);
    for (i = 2; i < n - 2; i++)
    {
        f3 = f1 + f2;
        printf("%d ", f3);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}