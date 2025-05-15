/*
12. WAP in C to delete desired char from string.
         i/p:char  s[20]=”acbcccab” , ch = ‘c’
              o/p: abab
*/
#include <stdio.h>
void main()
{
    char s[20];
    char ch;
    printf("Enter a string:\n");
    scanf("%[^\n]s", s);
    printf("eneter ch which is delete in str:\n");
    scanf(" %c",&ch);
    int i, j;
    for (i = 0; s[i]; i++)
    {
        if (s[i] == ch)
        {
            for (j = i; s[j]; j++)
            {
                s[j] = s[j + 1];
            }
            i--;
        }
    }
    printf("%s", s);
}