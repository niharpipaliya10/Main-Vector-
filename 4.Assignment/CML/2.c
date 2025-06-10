/*WAP in C using CLA to print 1st digit of num.
i/p: ./a.out 1234
o/p : 1*/
#include <stdio.h>
#include <stdlib.h>
void main(int argc, char **argv)
{
    int num;
    num = atoi(argv[1]);
    while (num >= 10)
        num = num / 10;
    printf("%d", num);
}