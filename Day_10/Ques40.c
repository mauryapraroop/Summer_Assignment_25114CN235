/*  A 
   ABA 
  ABCBA 
 ABCDCBA 
ABCDEDCBA 
*/



#include <stdio.h>

int main()
{
    int n ;


    printf("enter the number of rows you want:");
    scanf("%d",&n);


    for(int i=1;i<=n;i++)
    {
        // spaces
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        // increasing characters
        for(int j=1;j<=i;j++)
        {
            printf("%c",'A'+j-1);
        }

        // decreasing characters
        for(int j=i-1;j>=1;j--)
        {
            printf("%c",'A'+j-1);
        }

        printf("\n");
    }

    return 0;
}