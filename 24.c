/*
24.WAP in C to print first word from string using goto.
          i/p:  char s[20]=”vector india pvt”;
            o/p:     vector
*/
#include <stdio.h>
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int i = 0;
l:
    if (s[i] != ' ')
    {
        printf("%c", s[i]);
        i++;
        goto l;
    }
}