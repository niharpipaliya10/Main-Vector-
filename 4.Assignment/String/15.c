/*
15.WAP in C to delete first 3 char from string.
      i/p:   char s[10]=”armstrong num”
             o/p:  strong num
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

        s[i] = s[i + 3];
    }
    printf("%s", s);
}