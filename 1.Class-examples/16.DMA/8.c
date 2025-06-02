/*

wap to allocate dynamic memory for int 2d array scan the data and print the data
take number of roe and number of column from user.
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int r, c, i, j;
    printf("Enter a row and colum :\n");
    scanf("%d %d", &r, &c);
    int **p;
    p = malloc(sizeof(int *) * r);
    for (i = 0; i < r; i++)
    {
        p[i] = malloc(sizeof(int) * c);
    }
    printf("Enter a array ele:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", p[i][j]);
        }
        printf("\n");
    }
}