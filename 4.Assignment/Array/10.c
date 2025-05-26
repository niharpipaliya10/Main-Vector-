/*
 WAP in C to store set bit count to another array.
       i/p: int a[5]={10,15,64,100,511};
      o/p: int b[5]={2 , 4, 1, 3, 9 };
*/
#include <stdio.h>
void main()
{
    int a[5], i, b[5], c = 0, m, pos, k;
    printf("Enter a element of array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0, k = 0; i < 5; i++, k++)
    {
        for (pos = 31, c = 0; pos >= 0; pos--)
        {
            m = a[i] >> pos & 1;
            if (m)
            {
                c++;
            }
        }
        b[k] = c;
    }
    for (i = 0; i < 5; i++)
    {
        printf(" %d", b[i]);
    }
}