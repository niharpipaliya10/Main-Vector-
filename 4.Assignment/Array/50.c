/*
50. WAP  in C  to  delete all strong  num from array .
i/p:  int a[6]={2,145,2,14,3,2};
o/p:  int a[6]={14,3};
*/
#include <stdio.h>
void main()
{
    int a[6], i, j, ele, c;
    int mul, sum, r, temp, d = 0;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter a element:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ele; i++)
    {
       
        temp = a[i];
        sum = 0;

        for (; temp; temp = temp / 10)
        {
            r = temp % 10;

            for (j = 1, mul = 1; j <= r; j++)
            {
                mul = mul * j;
            }
            sum = sum + mul;
        }

        if (sum == a[i])
        {
            for (j = i; j < ele - 1; j++)
            {
                a[j] = a[j + 1];
            }
            ele--;
            i--;
        }
    }
    for (i = 0; i < ele; i++)
    {
        printf(" %d", a[i]);
    }
}