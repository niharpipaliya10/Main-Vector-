/*
27. WAP in Cto print fibonacii series b/w 0 to 31
*/

#include <stdio.h>
void main()
{
    int a = 0, b = 1, i, sum;

    printf("%d ", a);
    for (i = 0; i < 31; i++)
    {

        sum = a + b;
        if (sum < 31)
            printf("%d ", sum);
        a = b;
        b = sum;
    }
}