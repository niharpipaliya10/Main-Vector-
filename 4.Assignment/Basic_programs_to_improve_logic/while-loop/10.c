/*
Count  even digit b/w 1 to 7
i/p1:    963         o/p1:  1
i/p2:    2686       o/2p:  3
*/
#include <stdio.h>
void main()
{
    int num, r, c = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    while (num)
    {
        r = num % 10;
        if (r % 2 == 0 && r >= 1 && r <= 7)
        {
            c++;
        }
        num = num / 10;
    }
    printf("count even digit b/w 1 to 7:%d", c);
}