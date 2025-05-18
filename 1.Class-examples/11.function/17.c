/*
wap to delete charactor from sting .
i/p: "embedded"  and ch="e"
o/p: "mbddd";
*/
#include <stdio.h>
#include <string.h>
void str(const char *);
void main()
{
    char s[] = "embedded", ch = 'e';
    char *p, *q;
    p = s;
    str(s);
    while (q = strchr(p, ch))
    {
        strcpy(q, q+1);
        
    }
    str(s);
}
void str(const char *p)
{

    while (*p)

        printf("%c", *p++);
    printf("\n");
}