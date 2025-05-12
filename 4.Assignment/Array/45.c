/*
45.WAP in C to print 1st perfect and pos form  array .
    i/p:  int a[5]={2,4,6,28,6};
   o/p:       num= 6, pos= 2
*/
#include <stdio.h>
void main()
{
    int a[5];
    int ele, i, j, sum;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter a ele of array:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < ele; i++)
    {
        for (j = 1, sum = 0; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == a[i])
        {
            printf("num=%d pos=%d", a[i], i);
            break;
        }
    }
}