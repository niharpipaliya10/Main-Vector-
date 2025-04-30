/*check given number is palidrom or not*/
#include <stdio.h>
void main()
{
    int num, i, r, temp, rev = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    temp = num;
    for (; num; num = num / 10)
    {
        r = num % 10;
        rev = rev * 10 + r;
    }
    if (rev == temp)
    {
        printf("number is palidrom.");
    }
    else
    {
        printf("number is not palidrom");
    }
}