/*
WAP in C using  CLA  to  insert one char in
string at given postion .
    i/p :    ./a.out   ABCDEF    2   P
    o/p :  ABPCDEF

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(int argc, char **argv)
{
    if (argc < 4)
    {
        printf("USAGE: ./a.out string ");
        return;
    }
    char *s;
    int i, l, n;
    n = atoi(argv[2]);
    s = argv[1];
    for (l = 0; s[l]; l++)
        ;
    for (i = l; i >= n; i--)
    {
        s[i + 1] = s[i];
    }

    s[n] = argv[3][0];
    printf("%s", s);
}