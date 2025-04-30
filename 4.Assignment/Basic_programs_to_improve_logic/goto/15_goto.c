/*15.Print1st digit .
 i/p1: 9642 o/p1: 9
 i/p2: 56725 o/p2: 5*/
#include <stdio.h>
void main()
{
    int num, r, rev = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    rev = rev * 10 + r;
    num = num / 10;
    if (num != 0)
        goto l1;
    rev = rev % 10;
    printf("print the first digit given number is  :%d", rev);
}