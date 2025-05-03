/*
WAP in C to count prime digit using do-while loop.
  i/p: int n=34567 ,c=0;
  o/p: c=3
*/
#include <stdio.h>
void main()
{
  int num, r, c = 0,i;
  printf("Enter a number:\n");
  scanf("%d", &num);
  do
  {
    r = num % 10;
    for (i = 2; i < r; i++)
    {
      if (r % i == 0)
      {
        break;
      }
    }
    if (i == r)
    {
      c++;
    }
    num = num / 10;
  } while (num);
  printf("%d", c);
}