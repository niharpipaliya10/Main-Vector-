/*
34.WAP in C to count duplicate char from string.
        i/p: s[20]=”aaababcdeb”
        o/p: a-->4 times b-->3 times
*/
#include <stdio.h>
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int i, j, c, d;
    for (i = 0; s[i]; i++)
    {
        d = 0;
        for (j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                d = 1;
                break;
            }
        }
        if (d)
            continue;
        for (j = i + 1, c = 0; s[j]; j++)
        {
            if (s[i] == s[j])
            {
                c++;
            }
        }
        if (c > 1)
            printf("%c-->%d times\n", s[i], c);
    }
}