/*
 *
 * A
 * B *
 * C * *
 * D * * *
 */

#include <stdio.h>
void main()
{

    int i, j, num;
    char ch = 64;
    printf("Enter a row number:\n");
    scanf("%d", &num);
    for (i = 0; i <= num; i++, ch++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 1)
            {
                printf(" %c", ch);
            }
            else
            {
                printf(" *");
            }
        }
        printf("\n");
    }
}