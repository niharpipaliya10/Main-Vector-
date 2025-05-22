/*
how to print 2d array.
*/
#include <stdio.h>
void main()
{
    // int b[2][3] = {{10, 20, 30}, {40, 50, 60}};
    int b[2][3];
    int i, j, r, c;
    r = sizeof(b) / sizeof(b[0]);
    c = sizeof(b[0]) / sizeof(b[0][0]);
    printf("Enter a 2d array elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf(" %d", &b[i][j]);
        }
        // printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d", b[i][j]);
        }
        printf("\n");
    }
}