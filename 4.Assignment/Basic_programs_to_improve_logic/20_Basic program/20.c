/*20.Swap first and 3rd nibble */
#include <stdio.h>
void main()
{
    int num, pos, m, n, i, j;
    printf("Enter a number is:\n");
    scanf("%d", &num);

    printf("before:\n");
    for (pos = 31; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }

    for (i = 0, j = 8; i < 4; j++, i++)
    {
        m = num >> i & 1;
        n = num >> j & 1;
        if (m != n)
        {
            num = num ^ 1 << i;
            num = num ^ 1 << j;
        }
    }

    printf("\n11After:\n");
    for (pos = 31; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
}