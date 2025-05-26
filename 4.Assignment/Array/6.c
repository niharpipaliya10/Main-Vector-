/*
6.WAP in C to delete 1st digit of all array elements.
     i/p:  int a[6]={12,234,321,45,654,1234};
    o/p:  int a[6]={2 , 34, 21, 5, 54, 234};
*/
#include <stdio.h>
void main()
{
    int a[6], i, j, k, rev, r, b[6];
    printf("Enter a element of array:\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d",&a[i]);
    }

    for (i = 0, k = 0; i < 6; i++, k++)
    {

        for (rev = 0; a[i]; a[i] = a[i] / 10)
        {
            r = a[i] % 10;
            rev = rev * 10 + r;
        }
        rev = rev / 10;
        b[k] = rev;
    }

    printf("\n");
    for (i = 0, k = 0; i < 6; i++, k++)
    {

        for (rev = 0; b[i]; b[i] = b[i] / 10)
        {
            r = b[i] % 10;
            rev = rev * 10 + r;
        }

        b[k] = rev;
    }
    for (i = 0; i < 6; i++)
    {
        printf(" %d", b[i]);
    }
}