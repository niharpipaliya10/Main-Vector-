/*
9 8 7 6 5 6 7 8 9
  9 8 7 6 7 8 9
    9 8 7 8 9
      9 8 9
        9
*/
#include <stdio.h>
void main()
{
  int i, j, k, l, a = 4, n;
  printf("Enter a row number:\n");
  scanf("%d", &n);
  for (i = 0, a = a + n; i < n; i++, a = a + k)
  {
    for (j = 0; j <= i; j++)
    {
      printf("  ");
    }
    for (k = 0; k < n - i; k++, a--)
    {
      printf(" %d", a);
    }
    for (l = 1; l < n - i; l++)
    {
      printf(" %d", l + a + 1);
    }
    printf("\n");
  }
}