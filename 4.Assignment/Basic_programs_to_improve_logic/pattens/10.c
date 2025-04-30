/*
10.
                         1
                         3   1
                         5   3   1
*/
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i < 4; i++)
    {

        for (j = 1; j <= i; j++,i++)
        {
            if (i % 2 != 0)
            {
                printf("%d", i);
            }
        }
        printf("\n");
    }
}
