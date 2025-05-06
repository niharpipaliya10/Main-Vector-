// wap to concatenate the two string.
#include <stdio.h>
void main()
{

    char s[10], d[10], i,j;
    printf("Enter a two string:\n");
    scanf("%s %s", s,d);
    printf("Before:s=%s d=%s\n", s, d);
    for (i = 0; d[i]; i++)
        ;
    for (j = 0; s[j]; i++, j++)
    {
        d[i] = s[j];
    }
    d[i]='\0';

    printf("s=%s", d);
}