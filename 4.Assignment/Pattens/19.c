/*
              Z
           Z  Y
        Z  Y  X
     Z  Y  X  W
  Z  Y  X  W  V

*/
#include <stdio.h>
void main()
{

    int i, j, k, n;
    char ch;
    printf("Enter a row number:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("  ");
        }
        for (k = 0, ch = 90; k <= i; k++, ch--)
        {
            printf(" %c", ch);
        }
        printf("\n");
    }
}