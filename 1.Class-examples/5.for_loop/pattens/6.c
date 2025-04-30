/*
a
12
abc
1234
abcde
*/
#include <stdio.h>
void main()
{
    int num = 6, j, i;
    char ch = 'a';
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c", ch + j);
            }
            else
            {
                printf("%d", j+1);
            }
        }
        printf("\n");
    }
}