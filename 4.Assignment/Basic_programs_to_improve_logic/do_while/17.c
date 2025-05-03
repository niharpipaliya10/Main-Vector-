/*
17.  Reverse odd digit in num .
 i/p1:    963           o/p1: 39
i/p2:    27851        o/p2:157
*/
#include <stdio.h>
void main()
{
    int num, r, rev = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    do
    {
        r = num % 10;
        if (r % 2 != 0)
            rev = rev * 10 + r;
        num = num / 10;
    } while (num);
    printf("%d", rev);
}