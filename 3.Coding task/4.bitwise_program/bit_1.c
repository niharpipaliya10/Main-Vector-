// Write a Program in C to set 3rd and 2nd bit .
//  i/p: int n= 51 o/p : 63

#include <stdio.h>
void main()
{
  int num, pos;
  printf("Enter a number...\n");
  scanf("%d", &num);

  num = num | 1 << 3;
  num = num | 1 << 2;
  // num = num & ~(1 << 0);
  // num = num & ~(1 << 5);
  // num = 15 & 1 << pos;
  // num = 15 >> pos & 1;
  printf("%d", num);
}