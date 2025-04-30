/*
19. WAP in C to print alternative prime number
b/w 5 to 35 using  while loop.
*/
#include <stdio.h>
void main()
{
    int num = 5, i, c, d = 0;
    while (num <= 35)
    {
        i = 1;
        c = 0;
        while (i <= num)
        {
            if (num % i == 0)
            {
                c++;
            }
            i++;
        }
        if (c == 2)
        {
            d++;
            if (d % 2 != 0)
            {
                printf("%d ", num);
            }
        }

        num++;
    }
}