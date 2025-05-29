/*
25.WAP in C to print last word from string using goto.
          i/p:  char s[20]=”vector india coding ”;
            o/p:       coding
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int len, i, j;
    len = strlen(s);
    for (i = len; s[i] != ' '; i--)
        ;
    for (j = i; s[j]; j++)
    {
        printf("%c", s[j]);
    }
}