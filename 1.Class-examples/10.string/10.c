// wap to copy a string .
#include <stdio.h>
void main()
{

    char s[50], s1[50];
    int i;
    printf("Enter a string:\n");
    scanf("%s", s);
    printf("s=%s\n", s);
    for (i = 0; i < s[i]; i++)
    {
        s1[i] = s[i];
    }
    // s1[i]='\0';
    printf("s1=%s", s1);
}