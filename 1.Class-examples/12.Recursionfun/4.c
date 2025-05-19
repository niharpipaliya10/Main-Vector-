/*
wap to sring copy using recursive function.
*/
#include <stdio.h>
void str_cpy(const char *, char *);
void main()
{
    char s[20], d[20];
    printf("Enter a string:\n");
    scanf("%s", s);
    printf("before=%s\n", d);
    str_cpy(s, d);
    printf("After = %s\n", d);
}
void str_cpy(const char *s, char *d)
{

    if (*s)
    {
        *d = *s;
        s++;
        d++;
        str_cpy(s, d);
        // str_cpy(s+1,d+1);
    }
    else
    {
        *d = '\0';
    }
}
