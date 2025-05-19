// in given arr int a[5]={1,2,3,4,5},using char pointer to every element 1 byte swap with 3 byte.

#include <stdio.h>
void main()
{
    int a[5] = {786432, 720896 ,589824, 524288, 458752}, ele, i, pos;
    int j, k, m, n, l;
    ele = sizeof(a) / sizeof(a[0]);
    char *p, *q, *r, t;
    p = (char *)a;
    for (i = 0; i < ele; i++)
    {
        q = p + 2;
        r = p;

        for (j = 0, k = 0; j < 8; j++, k++)
        {
            m = *r >> j & 1;
            n = *q >> k & 1;
            if (m != n)
            {
                *r = *r ^ 1 << j;
                *q = *q ^ 1 << k;
            }
        }
        for (pos = 31; pos >= 0; pos--)
        {
            printf("%d", *q >> pos & 1);
            if (pos % 8 == 0)
            {
                printf(" ");
            }

        }

        p = p + 4;
        printf("\n");
    }
    for (i = 0; i < ele; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < ele; i++)
    {
        for (pos = 31; pos >= 0; pos--)
        {
            printf("%d", a[i] >> pos & 1);
            if (pos % 8 == 0)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}