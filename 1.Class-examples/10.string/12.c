// wap to compare two string and print output both are qual ot not.
#include <stdio.h>
void main()
{
    char s1[10], s2[10],i;
    printf("Enter two string:\n ");
    scanf("%s %s", s1, s2);
    for (i = 0; s1[i] && s2[i]; i++)
    {
        if (s1[i] != s2[i])
        {
            break;
        }
    }
    if (s1[i] == s2[i])
    {
        printf("qual");
    }
    else
    {
        printf("not");
    }
}