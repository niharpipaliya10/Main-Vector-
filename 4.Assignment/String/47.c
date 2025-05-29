/*
 47.WAP in C delete substring from  main string .
  i/p:  char m[20]=”abc45 78abc”,s[10]=”abc”;
    o/p:   char m[20]=”45 78”
*/
#include <stdio.h>

void main()
{
    char m[20], s[10];
    printf("Enter a main string:\n");
    scanf("%[^\n]", m);
    printf("Enter a sub string:\n");
    scanf("%s", s);
    int i, j, f = 0, k;

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
            for (k = i+j; m[k]; k++)
            {
                m[k-j] = m[k];
            }
            m[k-j] = '\0';
            i=-1;
        }
    }
    printf("%s", m);
}

