/*
14.WAP in C to delete 0th index char from string.
        i/p:   char   s[20]=”coding sirji”;
           o/p:     oding sirji
*/
#include <stdio.h>
void main()
{
    char s[20];
    int i, j;
    printf("Enter a string:\n");
    scanf("%[^\n]",s);
    
    for (i = 0; s[i]; i++)
    {

        s[i] = s[i + 1];
    }
    printf("%s", s);
}