/*
:CML
1. WAP in C using file to reverse line having word india and store in same file.
Notel: Take file name at load time. // ./a.out data
Note2: char ** p; // allocate DMA to store file information.
Note3: String reverse function using recursive function with 1 argument.
Note4: Don't use another file . You can use PDF fucntion
void str_rev_fun(char *);
i/p
vector india BLR
coding sirji CDS
india vector 123
o/p
RLB aidni rotcev
coding sirji CDS
321 rotcev aidni

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void rev(char *s);
void main(int argc, char **argv)
{
    FILE *f;
    char ch;
    int c = 0, c1 = 0, l = 0;
    f = fopen(argv[1], "r");
    while ((ch = fgetc(f)) != EOF)
    {
        c++;
        if (ch == '\n')
        {
            l++;
            if (c > c1)
            {
                c1 = c;
            }
            c = 0;
        }
    }
    rewind(f);
    char **p;
    int i;
    p = malloc(sizeof(char *) * l);
    for (i = 0; i < l; i++)
    {
        p[i] = malloc(sizeof(char) * c1 + 1);
        fgets(p[i], c1 + 1, f);
    }
    rewind(f);
    fclose(f);
    f = fopen(argv[1], "w");
    for (i = 0; i < l; i++)
    {
        if (strstr(p[i], "india"))
        {
            rev(p[i]);
            fputs(p[i], f);
        }
        else
        {
            fputs(p[i], f);
        }
    }
}
void rev(char *s)
{
    
   static int len, k=0, f=0;
    char t;
    if (f == 0)
    {
        len = strlen(s);
        len -= 2;
        f = 1;
    }

    if (k < len)
    {
        t = s[k];
        s[k] = s[len];
        s[len] = t;
        len--;
        k++;
        rev(s);
    }
    else
    {
      f=0;
      k=0;

    }
}