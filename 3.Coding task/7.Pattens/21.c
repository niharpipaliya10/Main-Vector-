/*
                                                   1
                                                 2 3 2
                                               3 4 5 4 3
                                             4 5 6 7 6 5 4
                                           5 6 7 8 9 8 7 6 5
                                             4 5 6 7 6 5 4
                                               3 4 5 4 3
                                                 2 3 2
                                                   1
*/
#include <stdio.h>
void main()
{
  int i, j, k, l, a, b, c, n;
  printf("Enter a row number:\n");
  scanf("%d", &n);
  for (i = 0, a = 0; i < n; i++, a = a + i + 1)
  {
    for (j = 0; j < n - i; j++)
    {
      printf("  ");
    }
    for (k = 0; k <= i; k++)
    {
      printf(" %d", i + k + 1);
    }
    for (l = 1; l <= i; l++, a--)
    {
      printf(" %d", a);
    }
    printf("\n");
  }
  for (i = 1, b = n-1,c=n+2; i < n; i++, b = b - l - 1,c=c-j+1 )
  {
    for (j = 0; j <= i; j++)
    {
      printf("  ");
    }
    for (k = 0; k < n - i; k++, b++)
    {
      printf(" %d", b);
    }
    for (l = 1; l < n - i; l++,c--)
    {
      printf(" %d",c);
    }
    printf("\n");
  }
}