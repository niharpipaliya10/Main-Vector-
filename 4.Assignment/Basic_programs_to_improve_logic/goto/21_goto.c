/*21.Sumof 1st 3 digit.
 i/p1: 96321 o/p1:18
 i/p2: 2786 o/p2: 17*/
#include <stdio.h>
void main()
{
    int num, r, rev = 0, r1, sum = 0, c = 0;
    printf("Enter a number is:\n");
    scanf("%d", &num);
l1:
    r = num % 10;
    rev = rev * 10 + r;
    num = num / 10;
    if (num != 0)
        goto l1;
    // printf("reverse number is :%d", rev);
l2:
    r1 = rev % 10;
    sum = sum + r1;
    c++;
    rev = rev / 10;
    if (rev != 0 && c < 3)
        goto l2;
    printf("sum of 1st 3 digit is: %d", sum);
}