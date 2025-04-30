/*12.Sum of last 3 digit.
 i/p1: 9631 o/p1: 10
 i/p2: 2786 o/p2: 21*/
#include <stdio.h>
void main()
{
    int num, c = 0, sum = 0, r;
    printf("Enter a number is : \n");
    scanf("%d", &num);
    for (; num; num = num / 10)
    {
        r = num % 10;
        c++;
        if (c <= 3)
        {
            sum = sum + r;
        }
    }
    printf("sum of last 3 digit is:%d", sum);
}