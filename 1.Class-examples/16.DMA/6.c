/*
wap to allocate dynamic memory for 5 string scan data & print it.
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i;
    char *p[5];
    for (i = 0; i < 5; i++)
    {
        p[i] = malloc(sizeof(char) * 10);
    }
    printf("Enter a 5 string:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", p[i]);
    }
    printf("---------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", p[i]);
    }
}