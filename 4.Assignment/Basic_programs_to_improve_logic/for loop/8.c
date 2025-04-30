/*8.Count even digit more than 4
 i/p1: 123 o/p1: 0
 i/p2: 2076 o/p2: 1*/
#include <stdio.h>
void main()
{
    int num, r, c = 0;
    printf("Enter a number is :\n ");
    scanf("%d", &num);
    for (; num; num = num / 10)
    {
        r = num % 10;
        if (r % 2 == 0 && r >= 4)
        {
            c++;
        }
    }
    printf("count of even digti more than 4 is :%d", c);
}