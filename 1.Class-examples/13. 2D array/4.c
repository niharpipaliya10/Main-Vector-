/*

Wap to scan 5 string and bubbele sort perform.

*/
#include <stdio.h>
#include <string.h>
void main()
{
    char s[5][10], t[10];
    int i, ele, j;
    ele = sizeof(s) / sizeof(s[0]);
    printf("Enter a 5 string:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%s", s[i]);
    }
    printf(" before :\n");
    for (i = 0; i < ele; i++)
    {
        printf("%s\n", s[i]);
    }
    for (i = 0; i < ele - 1; i++)
    {
        for (j = 0; j < ele - 1 - i; j++)
        {
            if (strcmp(s[j], s[j + 1]) > 0)
            {
                strcpy(t, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], t);
            }
        }
    }

    printf(" after :\n");
    for (i = 0; i < ele; i++)
    {
        printf("%s\n", s[i]);
    }
}