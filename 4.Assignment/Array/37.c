/*
37.WAP in C to print and count armstrong  in array .
          i/p:  int a[7]={22,4,21,6,153,28,11};
              o/p:          4 6 153  ,count= 3
*/
#include <stdio.h>
void main()
{
    int a[7], i, j, ele, c;
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
        for (c = 0; temp; temp = temp / 10, c++)
            ;
        temp = a[i];
        sum = 0;

        for (; temp; temp = temp / 10)
        {
            r = temp % 10;

            for (j = 1, mul = 1; j <= c; j++)
            {
                mul = mul * r;
            }
            sum = sum + mul;
        }

        if (sum == a[i])
        {
            printf(" %d", a[i]);
            d++;
        }
    }
    printf("\ncounter = %d", d);
}
