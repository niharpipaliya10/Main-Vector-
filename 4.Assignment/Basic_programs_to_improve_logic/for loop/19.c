/*19. Reverse digit more than 5.
 i/p1: 963 o/p1: 69
 i/p2: 27851 o/p2:87*/
#include <stdio.h>
void main()
{
    int num, rev = 0, r;
    printf("Enter a number is :\n ");
    scanf("%d", &num);

    for (; num; num = num / 10)
    {
        r = num % 10;
        if (r > 5)
        {
            rev = rev * 10 + r;
        }
    }

    printf("Reverse digit more than 5 :%d", rev);
}
