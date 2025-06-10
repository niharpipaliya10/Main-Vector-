/*
6.
WAP in C using  CLA to  print average and sum
of  3 float number .
  i/p:   ./a.out   12.56   45.7   345.23
  o/p :    sum= 403.49   avg=134.496

*/
#include <stdio.h>
#include <stdlib.h>
void main(int argc, char **argv)
{
    if (argc < 3)
    {
        printf("USAGE: ./a.out num1,num2,num3 ");
        return;
    }
    float num1, num2, num3, num, i;
    num1 = atof(argv[1]);
    num2 = atof(argv[2]);
    num3 = atof(argv[3]);

    num = num1 + num2 + num3;
    printf("sum= %.3f\n", num);
    i = num / 3;
    printf("avg= %.3f", i);
}