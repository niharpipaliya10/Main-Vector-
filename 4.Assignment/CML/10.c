/*
WAP in C using  CLA  to print given Pattern .
   i/p:   ./a.out   5                         ./a.out   3
                                    |
             9   7   5   3   1      |
               7   5   3   1        |
                 5   3   1          |          5  3  1
                   3  1             |            3  1
                    1               |              1

*/
#include <stdio.h>
#include <stdlib.h>
void main(int argc, char **argv)
{
    int i, j, n, a;
    n = atoi(argv[1]);
    
    for (i = 0,a=n*2-1; i <= n; i++, a = a - 2)
    {   
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n - i; j++)
        {
            printf("%d ", a - j * 2);
        }
        printf("\n");
    }
}