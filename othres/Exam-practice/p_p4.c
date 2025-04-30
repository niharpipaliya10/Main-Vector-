/*
      F D B
       D B
        B
*/
#include <stdio.h>
void main()
{

    int i, j, k, n;
    char ch = 65;
    printf("Enter a row number:\n");
    scanf("%d", &n);
    for (i = 0, ch = ch + n; i <= n; i++, ch = ch + k - 1)
    {
        for (j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (k = 0; k < n - i; k++, ch--)
        {
            printf("   %c", ch);
        }
        printf("\n");
    }
}