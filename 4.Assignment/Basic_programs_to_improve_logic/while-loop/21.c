/*
21. Sum of  1st 3 digit .
i/p1:    96321         o/p1: 18
i/p2:    2786           o/p2:  17
*/
#include <stdio.h>
void main()
{
    int num, r, temp, c = 0, sum = 0, d = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    printf("sum of 1st  3 digit: ");
    while (temp)
    {
        r = temp % 10;
        c++;
        temp = temp / 10;
    }
    while (num)
    {
        r = num % 10;
        d++;
        if (d == c || d == c - 1 || d == c - 2)
        {
            sum = sum + r;
        }
        num = num / 10;
    }
    printf("%d", sum);
}