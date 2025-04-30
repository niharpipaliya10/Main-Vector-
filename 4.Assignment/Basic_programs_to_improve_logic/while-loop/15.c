/*
15. Print 1st   digit  .
i/p1:    9642           o/p1:  9
i/p2:    56725         o/p2:  5
*/
#include <stdio.h>
void main()
{
    int num, r, temp, c = 0, d = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    printf("Print 1st   digit: ");
    while (temp)
    {
        r = temp % 10;
        c++;
        temp = temp / 10;
    }
    while (num)
    {
        r = num % 10;
        d++;
        if (d == c)
        {
            printf("%d", r);
        }
        num = num / 10;
    }
}