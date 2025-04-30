/*
A B C D E
      D E
    C D E
  B C D E
A B C D E
*/
#include <stdio.h>
void main()
{
    int i, j, k, n;
    char ch, c = 65;
    printf("Enter a row number:\n");
    scanf("%d", &n);
    for (i = 0, ch = 64 + n; i < n; i++, ch = ch - i - 1)
    {
        for (j = 0; j < (n - 1) - i; j++, c++)
        {
            if (i == 0)
                printf(" %c", c);
            else
                printf("  ");
        }
        for (k = 0; k <= i; k++, ch++)
        {
            printf(" %c", ch);
        }
        printf("\n");
    }
}