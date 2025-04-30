/* (a+b)3=a3+3a2b+3ab2+b3
 i/p: a=2,b=3
 o/p: 125*/

#include <stdio.h>
void main()
{
    int a, b;
    printf("enter  a and b \n");
    scanf("%d%d", &a, &b);
    printf("%d\n", a * a * a + 3 * a * a * b + 3 * a * b * b + b * b * b);
}