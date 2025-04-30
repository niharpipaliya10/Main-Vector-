/*
 * * * * *
 *       A
 *     B A
 *   C B A
 * D C B A
 */

#include <stdio.h>
void main()
{
    int i, j, k, n;
    char ch = 65;
    printf("Enter a row number:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++, ch = ch + k + 1)
    {
        for (j = 0; j < n - i; j++)
        {
            if (i == 0 || j == 0)
                printf(" *");
            else
                printf("  ");
        }
        for (k = 0; k <= i; k++, ch--)
        {
            printf(" %c", ch);
        }
        printf("\n");
    }
}