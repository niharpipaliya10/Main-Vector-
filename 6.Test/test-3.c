/*
WAP to swap third and seventh nibble of given int using bitwise operator.

Ex:

int num=1234;

before binary :  | 0000 | 0000 | 0000 | 0000 | 0000 | 0100 | 1101 | 0010 |

after binary :      | 0000 | 0100 | 0000 | 0000 | 0000 | 0000 | 1101 | 0010 |
*/

#include <stdio.h>
void main()
{
    int num, pos, i, j, m, n;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("your number is: %d ", num);

    printf("\nBefore:\n");
    for (pos = 31; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" | ");
        }
    }

    for (i = 0, j = 24; i < 4; j++, i++)
    {
        m = num >> i & 1;
        n = num >> j & 1;
        if (m != n)
        {
            num = num ^ 1 << i;
            num = num ^ 1 << j;
        }
    }

    printf("\nAfter:\n");
    for (pos = 31; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" | ");
        }
    }
}