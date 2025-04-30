/* int num=12435682;
multiplication of even digits = 768
addition of odd digits = 9 */
#include <stdio.h>
void main()
{
    int num, r, sum = 0, mul = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (; num; num = num / 10)
    {
        r = num % 10;
        if (r % 2 == 0)
        {
            mul = mul * r;
        }
        else
        {
            sum = sum + r;
        }
    }
    printf("given number even digit multiplication is :%d\ngiven number odd digit addition is :%d", mul, sum);
}
