/*
PATTERN TO BE PRINTED

********* 
 ******* 
  ***** 
   *** 
    *  
*/

#include <stdio.h>

int main()
{
    int n;

    printf("enter the number of rows:");
    scanf("%d",&n); 

    for(int i=1;i<=n;i++)
    {
        // spaces
        for(int j=1;j<=i-1;j++)
        {
            printf(" ");
        }

        // stars
        for(int j=1;j<=2*(n-i)+1;j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}