/*
6.
WAP in C using function to right rotate array 2
times .
  i/p:  int a[6]={-2, 2,-5,-12,5,-7};
  o/p:  int a[6]={5,-7,-2, 2,-5,-12};
 void rotate_fun(int  *a,  int ele ,int n);
*/
#include <stdio.h>
void roatate_fun(int *, int, int);
void main()
{
    int a[6], i, n, ele;
    ele = sizeof(a) / sizeof(a[0]);
    rintf("Enter a ele of arry:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a how many times roatets:\n");
    scanf(" %d", &n);
    roatate_fun(a, ele, n);
}
void roatate_fun(int *a, int ele, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        temp = a[ele - 1];
        for (j = ele; j > -1; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = temp;
    }
    for (i = 0; i < ele; i++)
    {
        printf(" %d", a[i]);
    }
}