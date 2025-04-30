/* 26.Print 1st odd digit from start.
 i/p1: 64512 o/p1: 5
 i/p2: 41725 o/p2: 1 */

#include <stdio.h>
void main()
{
    int num, r, rev = 0, c = 0, temp;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    for (; temp; temp = temp / 10)
    {
        r = temp % 10;
        rev = rev * 10 + r;
    }
    for (; rev; rev = rev / 10)
    {
        r = rev % 10;
        if (r % 2 != 0)
        {
            c++;
            if (c == 1)
            {
                printf(" Print 1st odd digit from start : %d", r);
            }
        }
    }
}