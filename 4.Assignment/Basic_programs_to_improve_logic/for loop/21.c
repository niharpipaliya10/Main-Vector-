/* 21.Sum of 1st 3 digit.
 i/p1: 96321 o/p1:18
 i/p2: 2786 o/p2: 17*/
#include <stdio.h>
void main()
{
    int num, temp, r, c = 0, sum = 0, d = 0;
    printf("Enter a number is:\n");
    scanf("%d", &num);
    temp = num;
    for (; temp; temp = temp / 10, c++)
        ;
    for (; num; num = num / 10)
    {
        r = num % 10;
        d++;
        if (d == c || d == (c - 1) || d == (c - 2))
        {
            sum = sum + r;
        }
    }
    printf("Sum of 1st 3 digit:%d", sum);
}