/*
28. WAP in C to reverse last word in string  .
        i/p:  char s[30]=”vector india coding 123”;
        o/p:        vecor india coding  321
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char s[30];
    printf("Entyer a string:\n");
    scanf("%[^\n]", s);
    int len = strlen(s), i, j;

    for (i = len; s[i] != ' '; i--)
        ;

    for (int j = 0; j < i; j++)
    {
        printf("%c", s[j]);
    }
    printf(" ");
    for (i = len; s[i] != ' '; i--)
    {
        printf("%c", s[i]);
    }
}