// write a function to print copy string.
#include <stdio.h>
void str(const char *p);
void str_copy(const char *, char *);
void main()
{
    char s[10], c[10];
    printf("Enter a string:\n");
    scanf("%s", s);
    str(c);
    printf("\n");
    str_copy(s, c);
    str(c);
}
void str_copy(const char *p, char *q)
{
    int i;
    for (i = 0; p[i]; i++)
        q[i] = p[i];
    q[i] = '\0';
}
void str(const char *p)
{
    int i;
    // for (i = 0; p[i]; i++)
    //     printf("%c", p[i]);
    while (*p)

        printf("%c", *p++);
}