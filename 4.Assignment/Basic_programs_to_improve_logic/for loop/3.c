/*3.Sumof digitmorethan5.
 i/p1: 123 o/p1: 0
 i/p2: 246 o/p2: 6*/
#include <stdio.h>
void main()
{
    int num, r, sum = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    for (1; num; num = num / 10)
    {
        r = num % 10;
        if (r > 5)
        {
            sum = sum + r;
        }
    }
    printf("sum of digit more than 5 is:%d", sum);
}