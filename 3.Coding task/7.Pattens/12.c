/*
            A
        C B A
    E D C B A
G F E D C B A
*/
#include <stdio.h>
void main()
{
    int i, j, k, a = 1, n;
    char ch;
    printf("Enter a row number:\n");
    scanf("%d", &n);
    for (i = 0, ch = 65; i < n; i++, ch  = ch + k + 2)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("   ");
        }
        for (k = 0; k <= i ; k++, ch--)
        {
            printf(" %c", ch);
        }
        printf("\n");
    }
}