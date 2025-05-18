/*
wap sub string from main string
i/p:embedded  and 'ed'
o/p:"embd"
*/
#include <stdio.h>
void str(char *);
void main()
{
    char m[20] = "embedded", s[20] = "ed";
    char *p, *q;
    p = m;
    str(m);
    while (q = strstr(p, s))
    {
        strcpy(q, q + strlen(s));
    }
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