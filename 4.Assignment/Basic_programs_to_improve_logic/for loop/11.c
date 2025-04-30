/*11.Sum of even digit.
 i/p1: 963 o/p1: 6
 i/p2: 2786 o/p2: 16*/
#include <stdio.h>
void main()
{
    int num, sum = 0, r;
    printf("Enter a number is:");
    scanf("%d", &num);
    for (; num; num = num / 10)
    {
        r = num % 10;
        if (r % 2 == 0)
        {
            sum = sum + r;
        }
    }
    printf(" sum of even digit is:%d", sum);
}