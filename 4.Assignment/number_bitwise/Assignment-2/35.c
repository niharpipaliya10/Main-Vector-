/*
35. WAP in C delete first 2 digit from num.
  i/p:  234567
     o/p:  4567
*/
#include <stdio.h>
void main()
{
  int num, r, rev = 0, temp;
  printf("Enter a number:\n");
  scanf("%d", &num);

  temp = num;
  for (; temp; temp = temp / 10)
  {
    r = temp % 10;
    rev = rev * 10 + r;
  }
  // printf("After number is: %d\n ", rev);

  rev = rev / 100;
  for (num = 0; rev; rev = rev / 10)
  {
    r = rev % 10;
    num = num * 10 + r;
  }
  printf("%d", num);
}