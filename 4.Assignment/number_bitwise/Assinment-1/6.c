/*
6. WAP to delete no of bit from particular
position in given number .
Ex.   i/p num = 511 , bit = 4  , pos =2
00000000 00000000 00000001 11111111
   after deleting 4 bit fron 2nd pos .
00000000 00000000 00000000 00011111
*/

#include <stdio.h>
void main()
{
    unsigned int num, p, b, a, c;
    int pos;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Enter a start position:\n");
    scanf("%d", &p);
    printf("Enter a bits for deleting:\n");
    scanf("%d", &b);
    for (pos = 31; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 8 == 0)
        {
            printf(" ");
        }
    }
    a = num << 31 - p;
    a = a >> 31 - p;
    c = num >> b + p;
    num = c << p;
    num = num | a;
    printf("\n");
    for (pos = 31; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 8 == 0)
        {
            printf(" ");
        }
    }
}