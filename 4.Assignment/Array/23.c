/*
23. WAP in C to merge 2 array into 3rd array .
i/p: int a[2]={1,5}; b[4]={11,22,33,44};
      o/p:  int c[6]={1,11,5,22,33,44};
*/
#include <stdio.h>
void main()
{

    int a[2] = {1, 5}, b[4] = {11, 22, 33, 44}, i, c[6], j, k;
    for (i = 0, j = 0; i < 2; i++, j++)
    {
        if (j < 4)
        {
            c[j] = a[i];
            j++;
            c[j] = b[i];
        }
    }
    for (j = 4, i = 2; j < 6; j++, i++)
    {
        c[j] = b[i];
    }
    for (i = 0; i < 6; i++)
    {
        printf(" %d", c[i]);
    }
}