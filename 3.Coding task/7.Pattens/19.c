/*
           5 4 3 2 1 2 3 4 5
             4 3 2 1 2 3 4
               3 2 1 2 3
                 2 1 2
                   1
*/
#include <stdio.h>
void main()
{
  int i, j, k, l, a, n;
  printf("Enetr a row number:\n");
  scanf("%d", &n);

  for (i = 0, a = n; i < n; i++, a = a + k - 1)
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
      printf(" %d", l + 1);
    }
    printf("\n");
  }
}