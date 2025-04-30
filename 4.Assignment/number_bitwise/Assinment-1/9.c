/*
9.WAP  sum of even digit of given number.
[check digit is even or not using bitwise ]
Ex.  i/p  :   7722494      o/p : 12
*/

#include <stdio.h>
void main()
{
    int num, r, sum = 0, m;
    printf("Enter a number:\n");
    scanf("%d", &num);
l:
    r = num % 10;
    m = r & 1;
    if (m == 0)
    {
        sum = sum + r;
    }
    num = num / 10;
    if (num)
    {
        goto l;
    }
    printf("%d", sum);
}