/*
                   E D C B A B C D E
                     D C B A B C D
                       C B A B C
                         B A B
                           A
*/
#include <stdio.h>
void main()
{
  int i, j, k, n;
  char ch = 64, c;
  printf("Enter a row number:\n");
  scanf("%d", &n);

  for (i = 0, ch = ch + n; i <= n; i++, ch = ch + k - 1)
  {
    for (j = 0; j <= i; j++)
    {
      printf("  ");
    }
    for (k = 0; k < n - i; k++, ch--)
    {
      printf(" %c", ch);
    }
    for (k = 1, c = 65; k < n - i; k++, c++)
    {
      printf(" %c", c + 1);
    }
    printf("\n");
  }
}