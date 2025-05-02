/*
          Z
      Z   Y  X
   Z  Y   X  W  V
Z  Y  X   W  V  U  T
*/
#include <stdio.h>
void main()
{

    int i, j, k,n;
    char ch;
    printf("Enter a row number:\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("  ");
        }
        for (k = 0, ch = 90; k <= i * 2; k++, ch--)
        {
            printf(" %c", ch);
        }
        printf("\n");
    }
}