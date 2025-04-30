/*2.Sum of only 2 digit number.
 i/p : 56
 o/p:11
 */
#include <stdio.h>
void main()
{
    int num, r, r1;
    printf("Enter a number:");
    scanf("%d", &num);
    r = num % 10;
    num = num / 10;
    r1 = num % 10;
    printf("sum only 2 digit: %d", r + r1);
}