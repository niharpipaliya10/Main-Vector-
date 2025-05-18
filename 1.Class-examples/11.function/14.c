/*
design user defind strupper function.
*/
#include <stdio.h>
void str(const char *p);
void my_strupper(char *);
void main()
{
    char s[] = "nihar pipaliya";
    str(s);
    my_strupper(s);
    str(s);
}
void my_strupper(char *p)
{
    int i;
    for (i = 0; p[i]; i++)
    {
        if (p[i] >= 'a' && p[i] <= 'z')
        {
            p[i] = p[i] - 32;
        }
    }
}
void str(const char *p)
{
   
    while (*p)

        printf("%c", *p++);
}