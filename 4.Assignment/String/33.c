/*
33. WAP in C to delete duplicate char from string.
           i/p: s[20]=”abc abc ppp 122”
           o/p : abc p12
*/
#include <stdio.h>
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]",s);
    int i, j,k;
    for (i = 0; s[i]; i++)
    {
        for (j = i + 1; s[j]; j++)
        {
            if (s[i] == s[j])
            {
                for (k = j; s[k]; k++)
                {
                    s[k] = s[k + 1];
                }
                i--;
            }
        }
    }

    printf("%s", s);
}