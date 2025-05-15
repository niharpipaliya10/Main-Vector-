/*
5.WAP  in C  to add digits in string using char pointer.
        i/p:   char s[20]= “123 hello by6” , *cp;
         o/p:   sum=  12

*/
#include <stdio.h>
void main()
{
    char s[20];
    char *cp;
    cp = s;
    int i, r, sum = 0;
    printf("Enter a string:\n");
    scanf("%[^\n]s", s);
    for (i = 0; *(cp + i); i++)
    {
        if (*(cp + i) >= '0' && *(cp + i) <= '9')
        {

            sum = sum + (*(cp + i) - '0');
        }
    }
    printf("sum=%d", sum);
}