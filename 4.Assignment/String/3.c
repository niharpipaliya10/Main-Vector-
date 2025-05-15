/*
3.WAP in C to  count digits in string using pointer .
       i/p:    char s[20]=”p6c3s1  123  ok7”;
              o/p:   count =   7
*/
#include <stdio.h>
void main()
{
    int i, c = 0;
    char s[20];
    char *p;
    p = s;
    printf("Enter a string:\n");
    scanf("%[^\n]s", s);
    for (i = 0; i < *(p + i); i++)
    {
        if (*(p + i) >= '0' && *(p + i) <= '9')
        {
            c++;
        }
    }
    printf("count=%d", c);
}