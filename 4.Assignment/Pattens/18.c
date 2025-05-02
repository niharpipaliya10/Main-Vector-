/*
               1
          1    4
      1   4    9
   1  4   9    16
1  4  9  16    25

*/
#include <stdio.h>
void main()
{

    int i, j, k, n,a;

    printf("Enter a row number:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("  ");
        }
        for (k = 0,a=1; k <= i; k++,a=a+k*2+1)
        {
            printf(" %d",a);
        }
        printf("\n");
    }
}