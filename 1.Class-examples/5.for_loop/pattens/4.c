/*
1
10
101
1010
10101
*/

#include <stdio.h>
void main()
{
    int num = 6, j, i;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (j % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}