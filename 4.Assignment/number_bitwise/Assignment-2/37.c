/*
37. WAP in C to delete a digit from number with
only 1 loop .
  i/p:  int n= 254557 ,d=5
        o/p :   247
*/

#include <stdio.h>
void main()
{
  int num, r, rev = 0, d;
  printf("Enter a number:\n");
  scanf("%d", &num);
  printf("Enter a digit delete in number:\n");
  scanf("%d", &d);

l:
  r = num % 10;
  if (r == d)
  {
    num = num / 10;
  }
  else
  {
    rev = rev * 10 + r;
    num = num / 10;
  }
  if (num)
  {
    goto l;
  }

  num = 0;
  for (; rev; rev = rev / 10)
  {
    r = rev % 10;
    num = num * 10 + r;
  }
  printf("After number is: %d ", num);
}