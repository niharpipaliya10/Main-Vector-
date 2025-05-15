/*
4.WAP in C to  print ascii , octal , hex of given string.
        i/p :   char s[10]=”program” ;
       o/p :   p -->    112    160      70
               r  --->
*/
#include <stdio.h>
void main()
{
    char s[10];
    int i;
    printf("Enter a string:\n");
    scanf("%[^\n]s", s);
    for (i = 0; i < s[i]; i++)
    {
        printf("%c--> %d %o %x\n", s[i], s[i], s[i], s[i]);
    }
}