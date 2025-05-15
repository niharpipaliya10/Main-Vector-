/*
11. WAP in C to reverse first  3 letter  from string  .
         i/p:  char s[10]=”gnidoc coding ”;
           o/p:      ingdoc coding
*/
#include <stdio.h>
void main()
{
    char s[100];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int l = 0, i, c = 0;
    while (s[l])
    {
        l++;
        c++;
        if (c == 3)
            break;
    }
    i = l - 1;
    for (i; s[i] > 0; i--)
    {
        printf("%c", s[i]);
    }
    for (i = 3; s[i]; i++)
    {
        printf("%c", s[i]);
    }
}