/*
1
12
123
1234
12345
*/
#include <stdio.h>
void main()
{
    int num = 6, i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }
}