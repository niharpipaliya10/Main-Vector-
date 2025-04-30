/*15.Print 1st digit.
 i/p1: 9642 o/p1: 9
 i/p2: 56725 o/p2: 5*/

#include <stdio.h>
void main()
{
    int num, r,temp, rev = 0, c = 0, d = 0;
    printf("Enter a number is :\n ");
    scanf("%d",&num);
    temp = num;
    for (; temp; temp = temp / 10, c++)
        ;
    for (; num; num = num / 10)
    {
        r = num % 10;
        d++;
        if (d == c)
        {
            printf("%d", r);
        }
    }
}