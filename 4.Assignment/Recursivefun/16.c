/*
16.        compare two strings
int my_strncmp( char  *p, char *q,  int n );
*/
#include <stdio.h>
int my_strncmp(char *, char *q, int n);
void main()
{
    char s[20], a[20];
    int c, l;
    printf("Enter a 1 string:\n");
    scanf("%[^\n]", s);
    printf("Enter a second string:\n");
    scanf(" %[^\n]", a);
    printf("Enter how many char :\n");
    scanf(" %d", &l);
    c = my_strncmp(s, a, l);
    if (c == 1)
    {
        printf("str is same");
    }
    else
    {
        printf("str is not same");
    }
}
int my_strncmp(char *p, char *q, int l)
{

    if (l)
    {
        if (*p != *q)
        {
            return 0;
        }
        my_strncmp(p + 1, q + 1, l - 1);
    }
    return 1;
}