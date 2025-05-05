// wap to rever th contentend of the string
#include <stdio.h>
void main()
{
    char s[50];
    int len, i, j,t;
    printf("Enter a string:\n");
    scanf("%s", s);
    printf("befor:-%s", s);

    for (len = 0; s[len]; len++)
        ;
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
    printf("\nafter=%s", s);
}