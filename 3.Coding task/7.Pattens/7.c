/*
E D C B A             * 4 3 2 1             I G E C A
  D C B A               * 3 2 1               G E C A
    C B A                 * 2 1                 E C A
      B A                   * 1                   C A
        A                     *                     A

*/

#include <stdio.h>
void main()
{
    int i, j, k, n;
    char a;
    printf("enter a row number:\n");
    scanf("%d", &n);
    for (i = 0, a = 64 + n; i <= n; i++, a = a + k - 1)
    {
        for (j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (k = 0; k < n - i; k++, a--)
        {
            printf(" %c", a);
        }
        printf("\n");
    }
}