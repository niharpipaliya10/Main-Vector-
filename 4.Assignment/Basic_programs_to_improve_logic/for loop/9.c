/* 9.Count odd digit more than 3
 and less than 8.
 i/p1: 963 o/p1: 1
 i/p2: 2086 o/p2: 0*/
#include <stdio.h>
void main()
{
    int num, c = 0, r;
    printf("Enter a number is:");
    scanf("%d", &num);
    for (1; num; num = num / 10)
    {
        r = num % 10;
        if (r % 2 != 0 && r >= 3 && r <= 8)
        {
            c++;
        }
    }
    printf(" count odd digit more than 3 and less 8 is :%d ", c);
}