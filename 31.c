/*
31. WAP in C to check string is Palindrome or not.
       i/p: s[20]= “radar”
               o/p:  yes
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char s[20], a[20];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int len = strlen(s), i, j;

    for (i = 0, j = len - 1; i < len; j--, i++)
    {
        a[i] = s[j];
    }
    a[i] = '\0';
    if (strcmp(s, a) == 0)
    {
        printf("yes");
    }
    else
    {
        printf("not");
    }
    // printf("%s\n", a);
}