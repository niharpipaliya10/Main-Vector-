/*
29.WAP in C to delete duplicate elements from array .
        i/p:  a[10]={3,3,2,4,4,1,2,3,7,9}
         o/p:  a[10]={3,2,4,1,7,9}
*/
#include <stdio.h>
void main()
{
    int a[10];
    int ele, i, j, k, n, c = 0;
    ele = sizeof(a) / sizeof(a[0]);
    n = ele;
    printf("Enter a array element :\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ele; i++)
    {

        for (j = i + 1; j < ele; j++)
        {
            if (a[i] == a[j])
            {
                c++;
                for (k = j; k < ele - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                ele--;
                i--;
            }
        }
    }
    for (i = 0; i < n - c; i++)
    {
        printf(" %d", a[i]);
    }
}