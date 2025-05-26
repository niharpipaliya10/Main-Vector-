/*
30 WAP in C to delete even duplicate ele from array.
        i/p:  a[10]={3,3,2,4,4,2,5,3,4,9}
        o/p:  a[10]={3,3,2,4,5,3,9}
*/
#include <stdio.h>
void main()
{
    int a[10];
    int ele, i, j, k, n, c = 0;
    ele = sizeof(a) / sizeof(a[0]);
    n = ele;
    printf("Enter a ele of array:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ele; i++)
    {

        for (j = i + 1; j < ele; j++)
        {
            if (a[i] % 2 == 0)
            {
                if (a[i] == a[j])
                {
                    c++;
                    if (c == 1)
                        continue;
                    for (k = j; k < ele - 1; k++)
                    {
                        a[k] = a[k + 1];
                    }
                    ele--;
                    i--;
                }
            }
        }
    }
    for (i = 0; i < n - c + 1; i++)
    {
        printf(" %d", a[i]);
    }
}