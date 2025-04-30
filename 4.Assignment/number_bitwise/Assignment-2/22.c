/*
22. WAP in C to print alternative palindrome number
b/w 111 to 222 using  while loop.
*/

#include <stdio.h>
void main()
{
    int num = 111, rev = 0, temp, r;

    while (num <= 222)
    {
        temp = num;
        rev = 0;
        while (temp)
        {
            r = num % 10;
            rev = rev * 10 + r;
            temp = temp / 10;
        }
        if (rev == num)
        {
            printf("%d ", rev);
        }
        num++;
    }
}