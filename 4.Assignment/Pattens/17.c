/*
2
2    3
2    3   5
2    3   5   7
2    3   5   7   11

*/
#include<stdio.h>
void main()
{
  int i, j, k, l, num, p, c, d = 0, n;
  printf("Enter a row number:\n");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    
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
          
            printf(" %d", num);
          
          d++;
        }
      }
    }

    printf("\n");
  }
}