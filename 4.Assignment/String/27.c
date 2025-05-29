/*
WAP in C to reverse 1st word in string using pointer.
          i/p:  char s[20]=”vector india pvt”;
            o/p:        rotcev india  pvt
*/
#include <stdio.h>
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    char *p;
    p = s;
    for (int i = 0; *(p + i) != ' '; i++)
    {
        printf("%c", *(p + i));
    }
}