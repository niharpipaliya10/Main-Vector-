/* 7.MathFormula.
 (a+b)2=a2+2ab+b2
 .i/p: a=9,b=2
 o/p: 121*/

#include <stdio.h>
void main()
{
    int a, b;
    printf("enter  a and b \n");
    scanf("%d%d", &a, &b);
    printf("%d\n", a * a + 2 * a * b + b * b);
}