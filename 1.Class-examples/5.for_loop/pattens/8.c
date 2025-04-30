/*
a
Bc
DeF
gHiJ
kLmNo
*/

#include <stdio.h>
void main()
{
    int i, j, num;
    char ch = 'a';
    printf("Enter a row number :\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j <= i; j++, ch++, ch = ch ^ 32)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}