// wap to print string in reverse
#include <stdio.h>
void main()
{
    char s[50];
    int len,i;
    printf("Enter a string:\n");
    scanf("%[^\n]", s);

    for (len = 0; s[len]; len++)
        ;
        // printf("%d",len);
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}