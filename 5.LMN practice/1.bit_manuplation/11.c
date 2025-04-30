// Write a program to swap the adjucent bytes of  a given 4-digit hexadecimal
//       number.
//       Ex :
//       given number  = 0x1234;
//       after swap        = 0x3412;

#include <stdio.h>
void main()
{

    int a, t1, t2, t3;
    printf("Enter a number:");
    scanf("%x", &a);
        printf("%x\n", a);
    t1 = a & 0x00ff;
    t1 = t1 << 8;
    t2 = a & 0xff00;
    t2 = t2 >> 8;

    t2 = t1 | t2;
    printf("%x\n", t2);
}