/*
           E D C B *
           D C B *
           C B *
           B *
           *
*/

#include <stdio.h>
void main()
{
    int i, j, n;
    char ch = 64;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 0, ch = ch + n; i < n; i++, ch = ch + j - 1)
    {
        for (j = 0; j < n - i; j++, ch--)
        {
            if (ch == 'A')
                printf(" *");
            else
                printf(" %c", ch);
        }
        printf("\n");
    }
}