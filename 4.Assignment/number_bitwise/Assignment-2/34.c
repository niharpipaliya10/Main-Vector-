/*
34. WAP in C to delete prime digits from num.
  i/p:  3445625
  o/p:  446
*/

#include <stdio.h>
void main()
{
  int num, r, rev = 0, d, i;
  printf("Enter a number:\n");
  scanf("%d", &num);

  for (; num;)
  {
    r = num % 10;
    for (i = 2; i < r; i++)
    {
      if (r % i == 0)
      {
        break;
      }
    }

    if (r == i)
    {
      num = num / 10;
    }
    else
    {
      rev = rev * 10 + r;
      num = num / 10;
    }
  }
  num = 0;
  for (; rev; rev = rev / 10)
  {
    r = rev % 10;
    num = num * 10 + r;
  }
  printf("After number is: %d ", num);
}