#include <stdio.h>
void main()
{
    int num, n, op, i, m, pos,s;
    printf("Enter a number :\n");
    scanf("%d", &num);
    printf("Enter number of rotation:\n ");
    scanf("%d", &n);
    printf("Enter a starting point:\n");
    scanf("%d",&s)
    printf("before:\n");
    for (pos = 31; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 8 == 0)
        {
            printf(" ");
        }
    }

l:
    printf("\nSelect the option\n 1.right shift \n 2. left shif\n");
    scanf("%d", &op);

    if (op == 1)
    {
        for (i = s; i < n + 1; i++)
        {
            m = num & 1;
            num = num >> 1;
            if (m)
            {
                num = num | 1 << 31;
            }
        }
    }
    else if (op == 2)
    {
        for (i = s; i < n + 1; i++)
        {
            m = num >> 31 & 1;
            num = num << 1;
            if (m)
            {
                num = num | 1;
            }
        }
    }
    else
    {
        printf("you select option is wrong.");
        goto l;
    }

    printf("\nafter:\n");
    for (pos = 31; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
}