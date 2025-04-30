/*
16.WAP in C to count perfect digit using while loop.
  i/p: int n= 34686 , c=0 ;
     o/p: c=2;
*/

#include <stdio.h>
void main()
{
  int num, sum, r, i, c = 0;
  printf("Enter a number\n ");
  scanf("%d", &num);

  while (num)
  {
    i = 1;
    sum = 0;
    r = num % 10;
    num = num / 10;
    while (i < r)
    {
      if (r % i == 0)
      {
        sum = sum + i;
      }
      i++;
    }
    if (sum == r)
    {
      c++;
    }
  }
  printf("count =%d", c);
}