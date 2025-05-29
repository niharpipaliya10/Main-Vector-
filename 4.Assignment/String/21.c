/*
21.WAP in C to count words in given string using goto.
       i/p:char s[20]=”hi   5  #$2   cs”;
             o/p: word count= 4
*/
#include <stdio.h>
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int i, c = 0;
    i = 0;
l:
    if (s[i] != ' ' && (s[i - 1] == ' ' || i == 0))
        c++;
    i++;
    if (s[i])
        goto l;

    printf("count=%d", c);
}