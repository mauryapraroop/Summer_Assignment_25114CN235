#include <stdio.h>

int main() {
    int i, j, n;

    printf("enter the number of rows you want to print:");
    scanf("%d", &n);
    

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}