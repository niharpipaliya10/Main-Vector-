/*
27. Sum of  1st and last  digit .
i/p1:    93321          o/p1: 10
i/p2:    277637         o/p2: 9
*/
#include <stdio.h>
void main()
{
    int num, r, temp, rev = 0, sum = 0, c = 0, r1, r2;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    printf("Print 1st odd digit from start:  ");
    while (temp)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }
    r1 = rev % 10;
    num = rev;

    while (num)
    {
        r = num % 10;
        sum = sum * 10 + r;

        num = num / 10;
    }
    r2 = sum % 10;
    sum = 0;
    sum = r1 + r2;
    printf("%d", sum);
}