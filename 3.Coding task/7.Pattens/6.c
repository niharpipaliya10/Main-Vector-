/*
            1
            0 1
            1 0 1
            0 1 0 1
            1 0 1 0 1

*/
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" %d", (j + i) % 2!=1);
        }
        printf("\n");
    }
}