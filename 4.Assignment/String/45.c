/*
45.WAP in C to count substring in main string .
  i/p: char m[20]=”abcd cd 12cd”, s[5]=”cd”
           o/p:   count = 3 times
*/
#include <stdio.h>

void main()
{
    char m[20], s[10];
    printf("Enter a main string:\n");
    scanf("%[^\n]", m);
    printf("Enter a sub string:\n");
    scanf("%s", s);
    int i, j, f = 0;

    for (i = 0; m[i]; i++)
    {
        for (j = 0; s[j]; j++)
        {
            if (m[i + j] != s[j])
            {
                break;
            }
        }

        if (s[j] == '\0')
        {
            f++;
        }
    }
    printf("count = %d\n", f);
}