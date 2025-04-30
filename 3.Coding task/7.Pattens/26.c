#include <stdio.h>
void main()
{
    int i, j, k, a, num, c, p, b;
    for (i = 0, a = 2; i < 6; i++, a = a + j * 2 )
    {
        b = a;
        for (j = 0; j <= i; b--)
        {

            for (p = 1, c = 0; p <= b; p++)
            {
                if (b % p == 0)
                {
                    c++;
                }
            }
            if (c++ == 2)
            {

                printf(" %d", b);
                j++;
            }
        }
        printf("\n");
    }
}