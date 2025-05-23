/*
23.WAP in C to print all word lenght in string .
           i/p: char s[20]= ”vector india pvt ”
                  o/p:    6   5   3
*/
#include <stdio.h>
void main()
{
    char s[200];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int i, c = 0;
    for (i = 0; s[i]; i++)
    {
        c++;
        if (s[i] == ' ')
        {
            printf(" %d", c - 1);
            c = 0;
        }
    }
    if (c > 0)
    {
        printf(" %d", c);
    }
}