/*
15. Print 1st   digit  .
i/p1:    9642           o/p1:  9
i/p2:    56725         o/p2:  5
*/
#include <stdio.h>
void main()
{
    int num, r, rev = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    do
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    } while (num);
    // printf("%d", rev);
    r = rev % 10;
    printf("%d", r);
}