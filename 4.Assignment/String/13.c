/*
13. WAP in C to delete desired char only 2 times
from right side of given  string using while loop.
         i/p: char s[20]=”abcccababc” , ch= ‘c’
             o/p:   abccabab
*/
#include <stdio.h>
void main()
{
    char s[20];
    char ch;
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    printf("eneter ch which is delete in str:\n");
    scanf(" %c", &ch);
    int i = 0, j, c = 0;
    while (s[i])
    {
        if (s[i] == ch)
        {
            c++;
            if (c > 2)
            {
                j = i;
                while (s[j])
                {

                    if (c > 2)
                        s[j] = s[j + 1];
                    j++;
                }

                i--;
            }
        }
        i++;
    }
    printf("%s", s);
}