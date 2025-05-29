/*
30.  WAP in C to sort the string  in ascending order
using while loop only .
           i/p:  char s[10]= ”Aa1Bb2Cc3”;
               o/p:    123ABCabc
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int i, j, t;
    int len = strlen(s);

    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (s[j] > s[j + 1])
            {
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }
    printf("%s", s);
}