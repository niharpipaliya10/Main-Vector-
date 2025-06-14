/*
Q8. WAP in C to delete any line of given file .
--------$ ./a.out  data  line_no
*/
#include <stdio.h>
#include <stdlib.h>
void main(int argc, char **argv)
{
    FILE *f;
    char ch;
    int l, n, i, c1 = 0, c = 0;
    n = atoi(argv[2]);
    f = fopen(argv[1], "r");
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
        if (i == (n - 1))
            continue;

        fputs(s[i], f);
    }
    fclose(f);
    free(s);
    for (i = 0; i < l; i++)
        free(s[i]);
}
    /*FILE *f1, *f2;
    char ch, s[1000];
    int line = 1, delno;
    delno = atoi(argv[1]);
    f1 = fopen("data1", "r");
    f2 = fopen("data", "w");
    while ((fgets(s, sizeof(s), f1)) != NULL)
    {
        if (line != delno)
            fputs(s, f2);
        line++;
    }
    fclose(f1);
    remove("data1");
    rename("data1", "data");
    */
