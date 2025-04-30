/*
Write a program in C to Print fibonacci series between 100 to 500.
*/
#include <stdio.h>

void main()
{
    int a = 0, b = 1, c;

    for (c = a + b; c <= 500; c = a + b)
    {
        if (c >= 100)
        {
            printf("%d ", c);
        }
        a = b;
        b = c;
    }
}
