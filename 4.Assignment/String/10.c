/*
10.WAP in C to reverse string using while loop .
         i/p:  char s[10]=”gnidoc 321”;
           o/p:     123 coding
*/
#include <stdio.h>
void main()
{
    char s[10];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int l = 0, i;
    while (s[l])
        l++;
    i = l - 1;
    while (s[i] > 0)
    {
        printf("%c", s[i]);
        i--;
    }
}