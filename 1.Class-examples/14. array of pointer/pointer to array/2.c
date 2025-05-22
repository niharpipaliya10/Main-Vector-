/*
wap to print int 2d array ele to pointer,
*/
#include <stdio.h>
void main()
{
    int b[2][3] = {{10, 20, 30}, {40, 50, 60}};
    int (*p)[3], i, j, r, c;
    r = sizeof(b) / sizeof(b[0]);
    c = sizeof(b[0]) / sizeof(b[0][0]);
    p=b;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}