/*
32. WAP in C to delete a digit from number .
  i/p:  int n= 234527 ,d=2
        o/p :  3457
*/
#include <stdio.h>
void main()
{
  int num, r, rev = 0, d;
  printf("Enter a number:\n");
  scanf("%d", &num);
  printf("Enter a digit delete in number:\n");
  scanf("%d", &d);

  for (; num;)
  {
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
  }
  num = 0;
  for (; rev; rev = rev / 10)
  {
    r = rev % 10;
    num = num * 10 + r;
  }
  printf("After number is: %d ", num);
}