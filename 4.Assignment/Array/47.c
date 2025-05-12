/*
47. WAP  in C  to  delete perfect number from array .
        i/p:  int a[6]={6,6,7,28,6,5,24};
       o/p:  int a[6]={7,5,24};
*/
#include <stdio.h>
void main()
{
    int a[7];
    int ele, i, j, sum, c = 0;
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

            for (j = i; j < ele - 1; j++)
            {
                a[j] = a[j + 1];
            }
            ele--;
            i--;
        }
    }
    for (i = 0; i < ele; i++)
    {
        printf(" %d", a[i]);
    }
}