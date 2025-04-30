/*22.Sumof 1st 3 odd digit.
 i/p1: 93321 o/p1:15
 i/p2: 277637 o/p2:17*/
#include <stdio.h>
void main()
{
    int num, r, r1, rev = 0, c = 0, sum = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    for (; num; num = num / 10)
    {
        r = num % 10;
        rev = rev * 10 + r;
    }
    printf("%d\n", rev);

    for (; rev; rev = rev / 10)
    {
        r1 = rev % 10;
        
        if (r1 % 2 != 0)
        {
            c++;
            if (c <4 )
            {
                sum = sum + r1;
            }
        }
    }
    printf("Sum of 1st 3 odd digit:%d", sum);
}