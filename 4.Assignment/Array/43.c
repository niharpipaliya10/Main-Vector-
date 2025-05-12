/*
43 .WAP in C to shift all odd elements to right side
in same array.
i/p:  int a[7]={11,22,22,44,55,33,88};
o/p:  int a[7]={22,22,44,88,11,55,33};
*/
#include <stdio.h>
void main()
{
    int a[7];
    int ele, i, n, temp, j, c = 0;
    ele = sizeof(a) / sizeof(a[0]);
    n = ele;
    printf("Enter a ele of array.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ele - c; i++)
    {
        if (a[i] % 2 != 0)
        {
            c++;
            temp = a[i];
            for (j = i; j < ele; j++)
            {
                a[j] = a[j + 1];
            }
            a[ele - 1] = temp;

            i--;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
}