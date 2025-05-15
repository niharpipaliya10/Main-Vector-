/*
2.WAP in C to  find lenght of string using pointer.
        i/p:    basic_program  , char s[20],*p;
           o/p:    lenght=  13
*/
#include <stdio.h>
void main()
{
    char s[200];
    char *p;
    int i;
    p = s;
    printf("Enter a string:\n");
    scanf("%[^\n]s", s);
    for (i = 0; *(p + i); i++)
        ;
    printf("lenght=%d", i);
}