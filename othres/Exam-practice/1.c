/*
 1.Write a program to take prime digit in a given number on
one side and non-prime digit  at other side in the same
number.
 Eg: Input  int num=1324351
 output num    =1413235
 Here 1,4,1 is non-prime digit and 3,2,3,5 are prime digit.


*/
#include <stdio.h>
void main()
{

    int num, p, c, r, mul = 0, sum = 0, rev = 0, rev2 = 0;
    printf("Enter a number \n");
    scanf("%d", &num);

    for (; num; num = num / 10)
    {
        r = num % 10;
        for (p = 1, c = 0; p <= num; p++)
        {
            if (r % p == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            // printf(" %d", r);
            sum = sum * 10 + r;
        }
        else
        {
            mul = mul * 10 + r;
        }
    }
    // printf("sum=%d\n", sum);
    for (; sum; sum = sum / 10)
    {
        r = sum % 10;
        rev = rev * 10 + r;
    }

    // printf("mul=%d\n", mul);
    for (; mul; mul = mul / 10)
    {
        r = mul % 10;
        rev2 = rev2 * 10 + r;
    }
    printf("%d", rev2);
    printf("%d\n", rev);
}