/*
20. WAP in C to print and count palindrome no b/w
88 to 131.
*/

#include <stdio.h>
void main()
{
    int num, rev = 0, temp, r;
    for (num = 88; num <= 131; num++)
    {
         temp=num;

        for (rev = 0; temp; temp = temp / 10)
        {
            r = num % 10;
            rev = rev * 10 + r;
        }
        if (rev == num)
        {
            printf("%d ", rev);
        }
    }
}