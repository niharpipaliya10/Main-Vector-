/*
        5
      5 4 5
    5 4 3 4 5
  5 4 3 2 3 4 5
5 4 3 2 1 2 3 4 5
  5 4 3 2 3 4 5
    5 4 3 4 5
      5 4 5
        5
*/
#include <stdio.h>
void main()
{
  int i, j, k, l, a, b = 7, c, d, n;
  printf("enter a row number:\n");
  scanf("%d", &n);
  for (i = 0, b = n + 2; i < n; i++, b = b - i - 1)
  {
    for (j = 0; j < n - i; j++)
    {
      printf("  ");
    }
    for (k = 0, a = n; k <= i; k++, a--)
    {
      printf(" %d", a);
    }

    for (l = 1; l <= i; l++, b++)
    {
      printf(" %d", b + i - 1);
    }
    printf("\n");
  }
  for (i = 1,d=3  ; i <= n; i++,d=d-l+2)
  {
    for (j = 0; j <= i; j++)
    {
      printf("  ");
    }
    for (k = 0, c = n; k < n - i; k++, c--)
    {
      printf(" %d", c);
    }
    for (l = 1; l < n - i; l++,d++)
    {
      printf(" %d",d );
    }
    printf("\n");
  }
}