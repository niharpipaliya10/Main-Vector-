/*
46.WAP in C to store 1st 7 prime number in array .
     i/p:   int a[7];
     o/p: int a[7]={2,3,5,7,11,13,17};
*/
#include <stdio.h>
void main()
{
    int a[7], d = 0, c,k,j,ele,i,n;
    ele = sizeof(a) / sizeof(a[0]);
     for (n = 1, k = 0; d < ele; n++)
    {

        for (j = 1, c = 0; j <= n; j++)
        {
            if (n % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            a[k] = n;
            k++;
        
            d++;
        }
    }

    for (i = 0; i < ele; i++)
    {
        printf(" %d", a[i]);
    }
}