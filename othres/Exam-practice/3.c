/*
1.Write a program to take digit which have even set bit
count on one side and digit which contain odd set bit count
at other side in the same number.
 Eg : Input  num=132435
 Now digit 1,2,4 contain odd set bit count but 3,3,5 contain
even set bit count.
 Output:   124335
 Here 1,2,4 are having odd set bit count and 3,3,5 having
even set bit coun
*/
#include <stdio.h>
void main()
{
    int num, sum1 = 0, sum2 = 0, pos, r, c, m, rev = 0, rev2 = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (; num; num = num / 10)
    {
        r = num % 10;
        for (pos = 31, c = 0; pos >= 0; pos--)
        {
            m = r >> pos & 1;
            if (m)
            {
                c++;
            }
        }
        if (c % 2 == 0)
        {
            sum1 = sum1 * 10 + r;
        }
        else
        {
            sum2 = sum2 * 10 + r;
        }
    }
    // printf("%d\n", sum1);
    for (; sum1; sum1 = sum1 / 10)
    {
        r = sum1 % 10;
        rev = rev * 10 + r;
    }

    // printf("%d\n", sum2);
    for (; sum2; sum2 = sum2 / 10)
    {
        r = sum2 % 10;
        rev2 = rev2 * 10 + r;
    }
    printf("%d%d\n", rev2, rev);
}