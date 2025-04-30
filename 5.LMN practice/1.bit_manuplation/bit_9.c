// Swap to two number using bitwise oprator.

#include <stdio.h>
void main()
{

    int i = 0x44332211;
    int t1,t2,t3;
    printf("before :i=%x\n", i);

    t1=i&0x000000ff;
    t1=t1<<24;
    t2=i&0xff000000;
    t2=t2>>24;
    t3=i&0x00ffff00;

    i=t1|t2|t3;

    printf("after : i=%x\n",i);
}