/*
12.WAP in C using Recursive fun to reverse string .
   i/p:   char s[20]=”123  abc  789”;
              o/p:     987   cba   321
void rec_fun_rev_string( char *p,  char *q );
*/
#include <stdio.h>
#include <string.h>
void rec_fun_rev_string(char *, char *);
void main()
{
    char s[20] = "123  abc  789";
    int len;
    len = strlen(s);
    rec_fun_rev_string(s, s + len - 1);
    printf("%s", s);
}
void rec_fun_rev_string(char *p, char *q)
{
    if (p < q)
    {
        int t = *p;
        *p = *q;
        *q = t;
        rec_fun_rev_string(p + 1, q - 1);
    }
}