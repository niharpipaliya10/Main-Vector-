/*3.Reverse 2 digit number.
 i/p : 12 o/p:21*/

#include <stdio.h>
void main()
{
    int num, r,r1;
    printf("Enter a number:");
    scanf("%d", &num);
    r = num % 10;
    num = num / 10;
    r1 = num % 10;
    printf("Reverse 2 digit: %d %d", r1,r);
}