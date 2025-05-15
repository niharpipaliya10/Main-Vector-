/*
6.6.WAP in C to print binary of all char in string .
     i/p:   char s[20]=”12 ab  AB”;
    o/p:
*/
#include <stdio.h>
void main()
{
    char s[20] = "12 ab AB";
    int i, j, pos;
    for (i = 0; i < s[i]; i++)
    {
        printf("%c=", s[i]);
        for (pos = 7; pos >= 0; pos--)
        {
            printf("%d", s[i] >> pos & 1);
            if (pos % 4 == 0)
                printf(" ");
        }
        printf("\n");
    }
}