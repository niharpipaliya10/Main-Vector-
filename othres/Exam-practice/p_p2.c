/*
            0
         1  *
      2  *  *
   3  *  *  *
4  *  *  *  *
*/
#include <stdio.h>
void main()
{
    int i, j, k, num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i; j++)
        {
            printf("  ");
        }
        for (k = 0; k <= i; k++)
        {
            if (k == 0)
            {
                printf("%d", i);
            }
            else
            {
                printf(" *");
            }
        }
        printf("\n");
    }
}