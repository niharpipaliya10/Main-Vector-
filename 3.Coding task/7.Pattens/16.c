/*
               2
             2 3 2
           2 3 5 3 2
         2 3 5 7 5 3 2
       2 3 5 7 * 7 5 3 2
     2 3 5 7 * * * 7 5 3 2
*/
#include <stdio.h>
void main()
{
  int i, j, k, l, num, p, c, d = 0, a, m, b;
  for (i = 0; i <= 5; i++)
  {
    for (j = 0; j < 5 - i; j++)
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
    for (l = 1; l <= i; l++)
    {
      printf(" *");
    }

    printf("\n");
  }
}