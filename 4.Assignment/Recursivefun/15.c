/*
15.          copy a string
void my_strncpy( char  *p, char *q,  int n )
*/
#include <stdio.h>
void my_strcpy(char *, char *, int);
void main()
{
    char s[20], a[20];
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    int l;
    printf("Enter how many caractor copy:\n");
    scanf("%d",&l);
    
    printf("%s\n", a);

    my_strcpy(s, a, l);

    printf("%s", a);
}
void my_strcpy(char *p, char *q, int l)
{

    if (l)
    {
        *q = *p;
        my_strcpy(p + 1, q + 1, l - 1);
    }

    *(q + l) = '\0';
}