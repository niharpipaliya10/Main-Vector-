/*
wap to print charactor 2d array function using pointer and pointer of array.
*/
#include <stdio.h>
void print(int, int, char (*)[]);
void print1(int, char **);
void main()
{
    char s[][10] = {"ABCD", "EFGH", "IJKL"};
    char *p[] = {"abcd", "efgh", "ijkl"};
    print(3, 10, s);
    print1(3, p);
}
void print1(int r, char **p)
{
    int i;
    for (i = 0; i < r; i++)
    {
        printf("%s\n", p[i]);
    }
}
void print(int r,int c, char (*p)[c])
{
    int i;
    for (i = 0; i < r; i++)
    {
        printf("%s\n", p[i]);
    }
}