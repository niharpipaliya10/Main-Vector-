/*
write a function user define strlen;
*/
#include <stdio.h>
int my_strlen(char *);
void main()
{
    char s[] = "niharpipaliya";
    printf("%d", my_strlen(s));
}
int my_strlen(char *p)
{
    int i;
    for (i = 0; *(p + i); i++)
        ;

    return i;
}