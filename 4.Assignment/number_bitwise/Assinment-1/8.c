/*
8. WAP to set 1st nibble ,clear 2nd nibble  ,
toggle 3rd nibble  without loop.
Ex.   i/p  unsigned short int k=0xA5F0
It’s binary   : 1010 0101 1111 0000
o/p binary   : 1010 1010 0000 1111
*/

#include <stdio.h>
void main()
{
    unsigned short int k, t, t1, t2, t3, t4;
    int pos = 15;
    printf("Enter a number:\n");
    scanf("%x", &k);
    for (pos; pos >= 0; pos--)
    {
        printf("%d", k >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
    t1 = k & 0x000f;
    t1 = 0x000f | t1;

    t2 = k & 0x00f0;
    t2 = t2 & 0x0000;

    t3 = k & 0x0f00;
    t3 = ~t3;
    t3 = t3 & 0x0f00;

    t4 = k & 0xf000;

    t = t1 | t2 | t3 | t4;

    printf("\n%x\n", t);
    for (pos = 15; pos >= 0; pos--)
    {
        printf("%d", t >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
}