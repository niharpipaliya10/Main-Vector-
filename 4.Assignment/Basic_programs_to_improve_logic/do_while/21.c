/*
21. Sum of  1st 3 digit .
i/p1:    96321         o/p1: 18
i/p2:    2786           o/p2:  17
*/
#include <stdio.h>
void main()
{
    int num, r, rev = 0, sum = 0, c = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    do
    {
        r = num % 10;

        rev = rev * 10 + r;

        num = num / 10;
    } while (num);
    // printf("%d", rev);
    do
    {
        r = rev % 10;
        sum = sum + r;
        c++;
        rev = rev / 10;
    } while (c < 3);
    printf("sum of 1st 3 digit is:%d ", sum);
}