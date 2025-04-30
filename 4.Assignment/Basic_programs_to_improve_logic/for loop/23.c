/* 23.Print 2nd last digit .
 i/p1: 96412 o/p1: 1
 i/p2: 725 o/p2: 2*/
#include <stdio.h>
void main()
{
    int num, r, c = 0;
    printf("Enter a number is : \n");
    scanf("%d", &num);
    for (; num; num = num / 10)
    {
        r = num % 10;
        c++;
        if (c == 2)
        {
            printf("Print 2nd last digit :%d", r);
        }
    }
}