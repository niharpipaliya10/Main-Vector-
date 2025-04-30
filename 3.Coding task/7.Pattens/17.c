/*
              2
            2 3
          2 3 5
        2 3 5 7
      2 3 5 7 9         //All are prime number but if prime number is Two
    2 3 5 7 9 *          //  digit then print star in that place
  2 3 5 7 9 * *          // for N=8
2 3 5 7 9 * * *
*/
#include <stdio.h>
void main()
{
  int i, j, k, l, num, p, c, d = 0, n;
  printf("Enter a row number:\n");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - i; j++)
    {
      printf("  ");
    }
    for (k = 0, d = 0; k <= i; k++)
    {
      // printf(" *");
      for (num = 2; d <= i; num++)
      {
        for (p = 1, c = 0; p <= num; p++)
        {
          if (num % p == 0)
          {
            c++;
          }
        }
        if (c++ == 2)
        {
          if (num > 9)
          {
            printf(" *");
          }
          else
          {
            printf(" %d", num);
          }
          d++;
        }
      }
    }

    printf("\n");
  }
}