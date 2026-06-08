/*  1 
   121 
  12321 
 1234321 
123454321

*/



#include <stdio.h>

int main()
{
    int n;


    printf("enter the number of rows you want:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        // spaces
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        // increasing numbers
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }

        // decreasing numbers
        for(int j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }

        printf("\n");
    }

    return 0;
}