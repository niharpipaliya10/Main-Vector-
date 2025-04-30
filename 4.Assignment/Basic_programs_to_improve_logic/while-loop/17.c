/*
17.  Reverse odd digit in num .
i/p1:    963           o/p1: 39
i/p2:    27851        o/p2:157
*/
#include <stdio.h>
void main()
{
    int num, r, temp, rev = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    printf("Reverse odd digit in num:  ");
    while (temp)
    {
        r = temp % 10;
        if (r % 2 != 0)
        {
            rev = rev * 10 + r;
        }
        temp = temp / 10;
    }
    printf("%d", rev);
}