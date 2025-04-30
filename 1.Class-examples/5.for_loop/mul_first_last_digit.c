// wap to print last and first number multiplication
#include <stdio.h>
void main()
{

    int num, r, c = 0, temp, mul = 1, d = 0;
    printf("enter int num:\n");
    scanf("%d", &num);

    temp = num;

    for (; temp; temp = temp / 10, c++)
        ;

    for (; num; num = num / 10)
    {
        r = num % 10;
        d++;

        if (d == 2 || d == c - 1)
            mul = mul * r;
    }

    printf("mul=%d\n", mul);
}
