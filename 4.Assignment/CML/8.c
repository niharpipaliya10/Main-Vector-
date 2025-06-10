/*
WAP in C using  CLA  to  reverse string .

   i/p :  ./a.out   “123  789  CBA”
    o/p:   ABC  987  321
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("USAGE: ./a.out string ");
        return;
    }
    char *s;
    int i,len;
    s = argv[1];
    len = strlen(s);
    for (i = len; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}