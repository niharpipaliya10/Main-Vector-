/*
21.WAP in C to print 1st 5 palindrome num from 55
*/
#include <stdio.h>
void main()
{
    int num, rev = 0, temp, r, c = 0;
    for (num = 55; c <= 5; num++)
    {
        temp = num;

        for (rev = 0; temp; temp = temp / 10)
        {
            r = num % 10;
            rev = rev * 10 + r;
        }
        if (rev == num)
        {
            c++;
            printf("%d ", rev);
        }
    }
}