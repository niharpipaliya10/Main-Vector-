/* 4.Sumof 3 digit number.
 i/p : 123 o/p: 6*/
#include <stdio.h>
void main()
{
    int num, r, r1, r2;
    printf("Enter a number:\n");
    scanf("%d", &num);
    r = num % 10;
    num = num / 10;
    r1 = num % 10;
    num = num / 10;
    r2 = num % 10;
    printf("sum of 3 digit : %d", r + r1 + r2);
}