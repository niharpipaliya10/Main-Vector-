/*13.Sum of last 3 odd digit.
 i/p1: 96312 o/p1: 13
 i/p2: 57235 o/p2: 15*/
#include <stdio.h>
void main()
{
    int num, r, c = 0, sum = 0;
    printf("Enter a number is :\n");
    scanf("%d", &num);

    for (1; num; num = num / 10)
    {
        r = num % 10;

        if (r % 2 != 0)
        {
            c++;
            if (c <= 3)
            {
                sum = sum + r;
            }
        }
    }
    printf("Sum of last 3 odd digit is :%d", sum);
}