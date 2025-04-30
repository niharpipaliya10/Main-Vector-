/*
palidrome number.
*/
#include <stdio.h>
void main()
{

    int rev, num, temp,r;
    for (num = 1; num <= 200; num++)
    {
        temp = num;
        for (rev = 0; temp; temp = temp / 10)
        {
            r = temp % 10;
            rev = rev * 10 + r;
        }
        if (rev == num)
        {
            printf(" %d", num);
        }
    }
}