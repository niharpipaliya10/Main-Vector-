/*
write a program print strin revers word by word;
*/
#include <stdio.h>
#include <string.h>
void str(const char *);
void str_rev(char *);
void str_rev1(char *, char *);
void main()
{
    char s[] = "pipaliya nihar";
    char *p, *q;
    p = s;
    str(s);
    while (q = strchr(p, ' '))
    {
        str_rev1(p, q - 1);
        p = q + 1;
    }
    str_rev(p);
    str(s);
    str_rev(s);
    str(s);
}
void str_rev(char *p)
{
    char *q, t;
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
}

void str(const char *p)
{

    while (*p)

        printf("%c", *p++);
    printf("\n");
}
void str_rev1(char *p, char *q)
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