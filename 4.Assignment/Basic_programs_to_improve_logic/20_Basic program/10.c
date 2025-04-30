/*10. Sum of  digit of number */

#include <stdio.h>
void main()
{

    int num, r, sum = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);

    for (; num; num = num / 10)
    {
        r = num % 10;
        sum = sum + r;
    }
    printf("sum of digit is:%d\n", sum);
}