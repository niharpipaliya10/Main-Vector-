/*
WAP  in C to  convert all word 1st and last char as a capital in file .
           -----i/p file ------                                    ------ o/p file ------
          123   abc   coding                                   123   AbC    CodinG
           file    ds    789   sirji                               FilE   DS   789   SirjI
*/
#include <stdio.h>
#include <string.h>
void main()
{
    FILE *f;
    f = fopen("data", "r+");
    int c = 0, c1 = 0, len, start, end, i, j, l;
    char ch;
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
    };
    rewind(f);
    char **s, *p;
    s = malloc(sizeof(char *) * l);
    for (i = 0; i < l; i++)
    {
        s[i] = malloc(c1 + 1);
    }
    while (fgets(s, (c1 + 1), f))
    {

        len = strlen(s);

        for (i = 0; s[i]; i++)
        {
            if (s[i] != ' ' && (s[i - 1] == ' ' || i == 0))
            {
                start = i;

                for (j = i;; j++)
                {
                    if (s[j] != ' ' && (s[j + 1] == ' ' || s[j + 1] == '\0'))
                    {
                        end = j;
                        break;
                    }
                }
            }
            if (s[start] >= 'a' && s[start] <= 'z')
                s[start] = s[start] - 32;
            if (s[end] >= 'a' && s[end] <= 'z')
                s[end] = s[end] - 32;
        }
        fseek(f, -len, SEEK_CUR);
        fputs(s, f);
    }
    free(s);
    for (i = 0; i < l; i++)
        free(s[i]);
}
