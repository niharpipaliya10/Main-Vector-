/*
2. WAP  for swapping first and last nibbles in
given short integer [2 byte ] .
Ex .    i/p  num = 63  .
It’s binary   :  0000 0000 0011 1111
After swap  :  1111 0000 0011 0000
*/

#include <stdio.h>
void main()
{
    short int num, m, n, pos = 15, i, j;
    printf("Enter a number :\n");
    scanf("%d", &num);
    printf("before swaping nibble:\n");
    for (pos = 15; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
    for (i = 0, j = 12; i <4; i++, j++)
    {
        n = num >> i & 1;
        m = num >> j & 1;
        if (m != n)
        {
            num = num ^ 1 << i;
            num = num ^ 1 << j;
        }
    }
    printf("\nAfter swaping nibble:\n");
    for (pos = 15; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
}