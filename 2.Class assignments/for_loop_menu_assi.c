#include <stdio.h>
void main()
{

    unsigned int num, m, i, j, n;
    int pos;
    printf("Enter a number:\n");
    scanf("%d", &num);

    for (pos = 31; pos >= 0; pos--)
    {

        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
    printf("\nnum=%d\n", num);

    for (i = 1; i < 4; i++)
    {
        m = num & 1;
        num = num >> 1;
        if (m)
        {
            num = num | 1 << 31;
        }
    }

    printf("After :\n");
    for (pos = 31; pos >= 0; pos--)
    {

        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
    printf("\n num=%u", num);
}