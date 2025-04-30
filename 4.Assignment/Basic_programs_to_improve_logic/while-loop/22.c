/*
22. Sum of  1st 3 odd  digit .
i/p1:    93321          o/p1: 15
i/p2:    277637         o/p2: 17
*/
#include <stdio.h>
void main()
{
    int num, r, temp, rev = 0, sum = 0, c = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    printf("sum of 1st  3 odd digit: ");
    while (temp)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }
    // printf("%d\n", rev);
    num = rev;
    while (num)
    {
        r = num % 10;
        if (r % 2 != 0 && c < 3)
        {
            sum = sum + r;
            c++;
        }
        num = num / 10;
    }
    printf("%d", sum);
}