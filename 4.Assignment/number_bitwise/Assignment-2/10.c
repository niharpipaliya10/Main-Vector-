/*
10. WAP in C to check given number is armstrong
number or not using  for loop
*/
#include <stdio.h>
void main()
{
    int num, r, i, mul, c = 0, temp, anum, sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    temp = num;
    anum = num;

l:
    r = num % 10;
    num = num / 10;
    c++;
    if (num)
        goto l;

    // printf("count=%d\n", c);

    while (temp)
    {
        i = 1;
        r = temp % 10;
        temp = temp / 10;
        mul = 1;
        while (i <= c)
        {
            mul = mul * r;
            i++;
        }
        sum = sum + mul;
        printf("%d\n", sum);
    }

    if (sum == anum)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }
}