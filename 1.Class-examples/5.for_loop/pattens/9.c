/*
a
123
abcd
1234567
abcdefghi
*/

#include <stdio.h>
void main()
{
    int i, j;
    char ch = 'a';
    for (i = 0; i < 5; i++ )
    {
        for (j = 0; j <= i*2; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c", ch+j);
            }
            else
            {
                printf("%d", 1 + j);
            }
        }
        printf("\n");
    }
}