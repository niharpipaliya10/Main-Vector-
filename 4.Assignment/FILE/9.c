/*
 WAP in  C to  delete line  1st and last line only in given any file using CLA.
--------$ ./a.out  data

*/

#include <stdio.h>
#include <stdlib.h>
void main(int argc, char **argv)
{
    FILE *f;
    char ch;
    int l, n, i, c1 = 0, c = 0;
    n = 1;
    f = fopen("data", "r");
    while ((ch = fgetc(f)) != EOF)
    {
        c++;
        if (ch == '\n')
        {
            l++;
            if (c > c1)
                c1 = c;
            c = 0;
        }
    }
    rewind(f);

    char **s;
    s = malloc(sizeof(char *) * l);
    for (i = 0; i < l; i++)
    {
        s[i] = malloc(c1 + 1);
    }
    for (i = 0; i < l; i++)
    {
        fgets(s[i], c1 + 1, f);
    }
    fclose(f);
    f = fopen("data", "w");
    for (i = 0; i < l; i++)
    {
        if (i == (n - 1) || i == 0)
            continue;

        fputs(s[i], f);
    }
    fclose(f);
    free(s);
    for (i = 0; i < l; i++)
        free(s[i]);
}