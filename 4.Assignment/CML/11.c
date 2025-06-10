/*
WAP in C using  CLA  to  count digit in string.
   i/p:   ./a.out   gd53gd82js
     o/p:   count=  4
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
    int i, c = 0;
    s = argv[1];

    for (i = 0; s[i]; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            c++;
        }
    }
    printf("count= %d", c);
}
