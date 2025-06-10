/*
WAP in C using  CLA to take array input and
print in reverse order .
i/p: ./a.out  11  22  33  44  55
o/p :   55   44   33  22    11
*/
#include <stdio.h>
#include <stdlib.h>
void main(int argc, char **argv)
{
    if (argc < 3)
    {
        printf("USAGE: ./a.out noeofele ele1 ele2 ..."); return;
    }
    int a[5], i, j, n;
    for (i = 0; i < atoi(argv[1]); i++, j++)
    {
        a[i] = atoi(argv[i + 2]);
    }
    for (i = 0; i < atoi(argv[1]); i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nAfter reverse:\n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}