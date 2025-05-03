/*
8. Sum of  1st and 2nd last
digit of given any int  num .
i/p1:    93321          o/p1: 11
i/p2:    277637         o/p2: 5
*/
#include <stdio.h>
void main()
{
    int num, r, r1, r2, sum = 0, c, temp, rev = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    temp = num;
    do
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    } while (num);
    // printf("%d", rev);
    r1 = rev % 10;

    temp = temp / 10;
    r2 = temp % 10;
    sum = r1 + r2;
    printf("sum of 1st and last digit is:%d", sum);
}