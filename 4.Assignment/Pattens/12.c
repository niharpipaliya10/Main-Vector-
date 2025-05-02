/*
E   D  C  B  A
*   D  C  B  A
*   *  C  B  A
*   *  *  B  A
*   *  *  *  A

*/
#include <stdio.h>
void main()
{
    int i, j, k,n;
    char ch;
    printf("Enter a row number:\n");
    scanf("%d",&n);
    for (i = 0, ch = 64 + n; i < n; i++,ch=ch+k-1)
    {
        for (j = 0; j < i; j++)
        {
            printf(" *");
        }
        for (k = 0; k < n - i; k++, ch--)
        {
            printf(" %c", ch);
        }
        printf("\n");
    }
}