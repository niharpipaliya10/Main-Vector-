/*
virtual swaping using array of pointer.
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char s[5][10], *t, *p[5];
    int i, j, ele;
    ele = sizeof(s) / sizeof(s[0]);
    printf("Enter a string:\n");
    for (i = 0; i < ele; i++)
    {
        p[i] = s[i];
    }
    for (i = 0; i < ele; i++)
    {
        scanf("%s", s[i]);
    }

    printf("using array...\n");
    for (i = 0; i < ele; i++)
    {
        printf("%s\n", s[i]);
    }
    
    printf("using pointer..\n");
    for (i = 0; i < ele; i++)
    {
        printf("%s\n ", p[i]);
    }

    for (i = 0; i < ele - 1; i++)
    {
        for (j = 0; j < ele - 1 - i; j++)
        {
            if (strcmp(p[j], p[j + 1]) > 0)
            {
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
        }
    }
    printf("After sort ..using array\n");
    for (i = 0; i < ele; i++)
    {
        printf("%s\n", s[i]);
    }
    printf("After sort ..using pointer\n");
    for (i = 0; i < ele; i++)
    {
        printf("%s\n", p[i]);
    }
}
