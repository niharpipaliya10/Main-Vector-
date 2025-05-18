/*
wap to one specific charactor deleted in given string.
*/
#include <stdio.h>
void main()
{
    char s[20], ch;
    int i, j, k;
    printf("Enter a string :\n");
    scanf("%s", s);
    printf("Enter a charactor :\n");
    scanf(" %c", &ch);
    for (i = 0; s[i]; i++)
    {
        if (s[i] == ch)
        {
            for (j = i; s[j]; j++)
            {
                s[j] = s[j + 1];
                 i--;
            }
        }
    }
    printf("%s\n", s);
}