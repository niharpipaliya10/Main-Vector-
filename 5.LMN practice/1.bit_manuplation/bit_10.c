// write a program to swap two number using bitwise operator.

#include <stdio.h>
void main()
{

    int i = 0x12341234;
    int t1, t2, t3, t4, t5, t6, t7, t8;
    printf("before : i=%x\n", i);

    t1 = i & 0x0f;
    t1 = t1 << 4;
    t2 = i & 0xf0;
    t2 = t2 >> 4;
    t3 = i & 0x0f00;
    t3 = t3 << 4;
    t4 = i & 0xf000;
    t4 = t4 >> 4;
    t5 = i & 0x0f0000;
    t5 = t5 << 4;
    t6 = i & 0xf00000;
    t6 = t6 >> 4;
    t7 = i & 0x0f000000;
    t7 = t7 << 4;
    t8 = i & 0xf0000000;
    t8 = t8 >> 4;
    i = t1 | t2 | t3 | t4 | t5 | t6 | t7 | t8;
    printf("after : i=%x\n", i);
}