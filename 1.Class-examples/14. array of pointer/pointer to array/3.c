/*
Desined a function to print int 2d array
*/
#include <stdio.h>
void print(int, int, int (*)[]);
void main()
{
    int b[2][3] = {{10, 20, 30}, {40, 50, 60}};
    print(2, 3, b);
}
void print(int r, int c, int (*p)[c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d", p[i][j]);
        }
        printf("\n");
    }
}