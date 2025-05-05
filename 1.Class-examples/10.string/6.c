// wap to calculate the string length
#include <stdio.h>
void main()
{
    char s[50];
    int len;
    printf("Enter a string:\n");
    scanf("%[^\n]", s);
    for (len = 0; s[len]; len++)
        ;
    printf("len=%d", len);
}