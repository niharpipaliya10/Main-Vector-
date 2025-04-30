/*28.Sum of 1st and 2nd last
 digit of given any int num.
 i/p1: 93321 o/p1:11
 i/p2: 277637 o/p2:5*/

#include <stdio.h>
void main()
{
    int num, r, rev = 0, c = 0, r1, r2, temp;
    printf("Enter a number is \n ");
    scanf("%d", &num);
    temp = num;
    for (; num; num = num / 10)
    {
        r = num % 10;
        c++;
        if (c == 2)
        {
            r1 = r;
            // printf("%d", r1);
        }
    }

    for (; temp; temp = temp / 10)
    {
        r = temp % 10;
        rev = rev * 10 + r;
    }

    r2 = rev % 10;
    printf("%d\n", r2 + r1);
}