/*
17.  locate character in string
char* my_strchr ( char  *p,  char ch );
*/
#include <stdio.h>
char *my_strchr(char *, char);
void main()
{
    char s[20] = "nihar", ch = 'a';
    char *p;
    p = my_strchr(s, ch);
    printf("%c", *p);
}
char *my_strchr(char *q, char ch)
{
    if (*q)
    {
        if (*q == ch)
        {
            return q;
        }
        return my_strchr(q + 1, ch);
    }
    return 0;
}