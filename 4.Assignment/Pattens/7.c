/*
A 1 B 2 C
A 1 B 2
A 1 B
A 1
A
*/

#include <stdio.h>
void main()
{
    int i, j, a, num;
    char ch;
    printf("Enter a row number:\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0, ch = 65, a = 1; j < num - i; j++)
        {
            if (j % 2 == 0)
            {
                printf("%c ", ch);
                ch++;
            }
            else
            {
                printf("%d ", a);
                a++;
            }
        }
        printf("\n");
    }
}