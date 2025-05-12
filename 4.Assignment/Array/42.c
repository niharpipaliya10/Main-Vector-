/*
42. WAP in C to shift all -ve elements to right side in
same array.
     i/p:  int a[7]={-1,22,3,-4,-8,33,77};
    o/p:  int a[7]={22,3,33,77,-1,-4,-8,};
*/
#include <stdio.h>
void main()
{
    int a[7];
    int i, ele, j, n, temp,c=0;
    ele = sizeof(a) / sizeof(a[0]);
    n = ele;
    printf("Enter a ele of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < ele-c; i++)
    {
        if (a[i] < 0)
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
    ele = n;
    for (i = 0; i < ele; i++)
    {
        printf(" %d", a[i]);
    }
}