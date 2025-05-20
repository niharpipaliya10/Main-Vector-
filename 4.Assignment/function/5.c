/*
WAP in C using function to count -ve element
(bitwise op) and delete -ve elements in array .
  i/p:  int a[6]={-2, 2,-5,-12,5,-7};
 o/p:  -ve number count = 4
         int a[ ]= {2,5};
 int count_del_fun(int  *a,  int *ele );
*/
#include <stdio.h>
int count_del_fun(int *, int *);
void main()
{
    int a[6], i, ele, c;
    ele = sizeof(a) / sizeof(a[0]);
    rintf("Enter a ele of arry:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    c = count_del_fun(a, &ele);
    printf("\n-ve number count = %d\n", c);
}
int count_del_fun(int *a, int *ele)
{
    int i, c = 0, b, s, j;
    s = *ele;
    for (i = 0; i < *ele; i++)
    {
        if (a[i] >> 31 & 1)
        {
            c++;
        }
    }
    for (i = 0, b = 0; i < *ele - b; i++)
    {
        if (a[i] < 0)
        {
            b++;
            for (j = i; j < *ele; j++)
            {
                a[j] = a[j + 1];
            }
            i--;
        }
    }
    for (i = 0; i < s - b; i++)
    {
        printf(" %d", a[i]);
    }
    return c;
}