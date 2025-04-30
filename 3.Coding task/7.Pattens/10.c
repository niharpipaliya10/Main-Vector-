/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
#include <stdio.h>
void main()
{
  int i, j, k, a = 1, n;
  printf("Enter a row number:\n");
  scanf("%d", &n);
  for (i = 0; i <= n; i++)
  {
    for (j = 0; j < n - i; j++)
    {
      printf("  ");
    }
    for (k = i; k >= 1; k--)
    {
      printf(" %d", k);
    }
    for (k = 2; k <= i; k++)
    {
      printf(" %d", k);
    }
    printf("\n");
  }
}