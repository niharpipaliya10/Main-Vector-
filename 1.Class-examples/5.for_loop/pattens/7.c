/*
12345
1234
123
12
1
*/
#include <stdio.h>
void main()
{
    int num = 6, i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5-i; j++)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }
}