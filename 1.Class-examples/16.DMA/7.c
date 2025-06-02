/*
Wap to allocate dynamic memeory for n number of
string scan it and print it take number of string from user
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, n;
    printf("Enter number of string:\n");
    scanf("%d", &n);
    char **p;
    p = malloc(sizeof(char *) * n);
    for (i = 0; i < n; i++)
    {
        p[i] = malloc(sizeof(char) * 10);
    }
    printf("Enter a %d string:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", p[i]);
    }
    printf("---------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", p[i]);
    }
}