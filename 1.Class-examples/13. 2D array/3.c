/*
wap to scan 5 string and print it on screen,
*/
#include <stdio.h>
void main()
{
    char s[5][10];
    int i, ele;
    ele = sizeof(s) / sizeof(s[0]);
    printf("Enter a 5 string:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%s", s[i]);
    }
    printf(" \n");
    for (i = 0; i < ele; i++)
    {
        printf("%s\n", s[i]);
    }
}