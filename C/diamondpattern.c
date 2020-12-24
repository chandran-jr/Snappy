#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int i, j, n;
    scanf("%d", &n);


    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf("* ");
        }
        printf(" ");

        for(j=1; j<=(2*i-2); j++)
        {
            printf("  ");
        }

        for(j=i; j<=n; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }

        for(j=(2*i-2); j<(2*n-2); j++)
        {
            printf("  ");
        }
        printf(" ");

        for(j=1; j<=i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
