/*
18.WAP in C to insert a char at 2nd index in string .
   i/p:    char s[10]=”abcdef” , in=2 , ch=’9’;
          o/p:   ab9cdef
*/
#include <stdio.h>
void main()
{
    char s[100], c;
    int i, j, l, in;
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    printf("Enter a index:");
    scanf(" %d", &in);
    printf("Enter a charactor:\n");
    scanf(" %c", &c);
    for (l = 0; s[l]; l++)
        ;
    for (i = l; i >= in; i--)
    {
        s[i + 1] = s[i];
    }

    s[in] = c;
    printf("%s", s);
}