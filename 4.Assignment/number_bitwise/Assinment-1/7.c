/*
7. WAP to reverse  1st 6bit to last 6 bit .
Ex.  i/p  int n =  995;
00000000 00000000 00000011 11100011
          after reversing 6 bit only
11000100 00000000 00000011 11000000
*/
#include <stdio.h>
void main()
{
    int num, i, j, m, n, pos;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("before:\n");
    for (pos = 31; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 8 == 0)
        {
            printf(" ");
        }
    }
    for (i = 0, j = 31; i < 6; i++, j--)
    {
        n = num >> i & 1;
        m = num >> j & 1;
        if (m != n)
        {
            num = num ^ 1 << i;
            num = num ^ 1 << j;
        }
    }

    printf("\nafter:\n");
    for (pos = 31; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 8 == 0)
        {
            printf(" ");
        }
    }
}