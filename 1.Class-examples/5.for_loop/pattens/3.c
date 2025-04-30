/*
a
ab
abc
abcd
*/
#include<stdio.h>
void main()
{
    int num = 6, i, j;
    char ch = 'a';
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c", ch+j );
        }
        printf("\n");
    }
}