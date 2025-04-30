/*
prime number print.
*/
#include <stdio.h>
void main()
{
    int i, num, c;
    for (num = 1; num <=50; num++)
    {
        for (i = 2, c = 0; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (num == i)
        {
            printf(" %d", num);
        }
    }
}