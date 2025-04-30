/*
33. WAP in C to delete odd digits from num.
  i/p:  2343356
   o/p:  246
*/

#include <stdio.h>
void main()
{
  int num, r, rev = 0, d;
  printf("Enter a number:\n");
  scanf("%d", &num);

  for (; num;)
  {
    r = num % 10;
    if (r % 2 != 0)
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