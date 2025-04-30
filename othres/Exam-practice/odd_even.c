/*
odd or even print
*/
#include <stdio.h>
void main()
{
    int num;

    for (num = 1; num <= 50; num++)
    {
        if (num % 2 == 0)
        {
            printf(" %d", num);
        }
    }
}