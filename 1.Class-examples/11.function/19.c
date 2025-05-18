/*
wap replaced a word in string.
i/p: today is monday. replece roday with tommorow
o/p: tommorow id monday.
*/
#include <stdio.h>
#include <string.h>
void str(char *);
void main()
{
    char m[20] = "today is monday", ow[] = "today", nw[] = "tommorow", t[20];
    char *p, *q;
    p = m;
    str(m);
    q = strstr(p, ow);
    strcpy(t, q + strlen(ow));
    strcpy(q, nw);
    strcpy(q + strlen(nw), t);
    str(m);
}
void str(char *p)
{
    while (*p)
    {
        printf("%c", *p++);
    }
    printf("\n");
}