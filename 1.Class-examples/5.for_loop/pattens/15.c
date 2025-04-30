#include <stdio.h>
void main()
{
    int i, j, k, num;
    printf("Enter a nuber of row:\n");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - 1 - i; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            if (k == 0 || k == i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = 0; i < num - 1; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < num - 1 - i; k++)
        {
            if (k == 0 || k ==  2-i)
                printf("*  ");
            else
                printf("   ");
        }
        printf("\n");
    }
}