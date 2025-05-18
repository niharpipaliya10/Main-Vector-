/*
design  strrev user define function.
*/
#include <stdio.h>
#include<string.h>
void str(const char *p);
void str_rev(char *, char *);
void main()
{
    char s[] = "nihar pipaya";
    int len;
    len=strlen(s); 
    str(s);

    str_rev(s, s + len - 1);
    str(s);
}
/*void str_rev(char *p)
{
    char *q,t;
    q = p;
    while (*q)
    {
        q++;
    }
    q--;
    while (p < q)
    {
        t = *p;
        *p = *q;
        *q = t;
        p++;
        q--;
    }
}*/
void str(const char *p)
{

    while (*p)

        printf("%c", *p++);
    printf("\n");
}
void str_rev(char *p, char *q)
{
    char t;
    while (p < q)
    {
        t = *p;
        *p = *q;
        *q = t;
        p++;
        q--;
    }
}