/*
A
A *
A * C
A * C *
A * C * E
*/
#include <stdio.h>
void main()
{
    int i, j, num;
    char ch;
    printf("Enter a row number :\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0, ch = 65; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf("%c ", ch + j);
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}