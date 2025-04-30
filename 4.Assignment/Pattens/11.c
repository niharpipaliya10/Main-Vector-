/*
1  2  3  4  *
1  2  3  *  5
1  2  *  4  5
1  *  3  4  5
*  2  3  4  5
*/

#include <stdio.h>
void main()
{
    int i, j, k, a=0, num;
    printf("Entyer a row number:\n");
    scanf("%d", &num);

    for (i = 0, a = num + k * 2; i < num; i++, a = a - i)
    {
        for (j = 0; j < num - 1 - i; j++)
        {
            printf(" %d", j + 1);
        }
        for (k = 0; k <= i; k++)
        {
            if (k == 0)
            {
                printf(" *");
            }
            else
            {
                printf(" %d", a);
                a = a - 1;
            }
        }
        printf("\n");
    }
}