/*
7.WAP in C to count set bit all char in string.
   i/p:  char s[10]=”bcd”;
   o/p:  3   4   3
*/
#include <stdio.h>
void main()
{
    char s[10];
    int pos, i, c, m;
    printf("Enter a string:\n");
    scanf("%[^\n]s", s);
    for (i = 0; i < s[i]; i++)
    {
        for (pos = 7, c = 0; pos >= 0; pos--)
        {
            m = s[i] >> pos & 1;
            if (m)
            {
                c++;
            }
        }
        printf(" %d", c);
    }
}