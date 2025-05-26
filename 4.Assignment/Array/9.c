/*
9.WAP in C to  count all set and clear bit array .
         i/p: int a[5]={10,15,64,100,511};
      o/p:     set count =19 , clear count=141
*/
#include <stdio.h>
void main()
{
    int a[5], i, c = 0, pos, m, d = 0;
    printf("Enter a element of array :\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        // printf(" %d", a[i]);
        for (pos = 31; pos >= 0; pos--)
        {
            m = a[i] >> pos & 1;
            if (m == 1)
            {
                c++;
            }
            else
            {
                d++;
            }
        }
    }
    printf("set count=%d,clear count= %d", c, d);
}