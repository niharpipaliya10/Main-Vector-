/*
 4.
                           * * * * *
                           * * *
                           *
*/
#include <stdio.h>
void main()
{
    int i, j,n;
   //  printf("Enter a row number:\n");
   //  scanf("%d",&n)
    for (i = 0; i <=n; i++)
    {
        for (j = n+1; j >=i*2; j--)
        {
            
                printf(" * ");
        }
        printf("\n");
    }
}