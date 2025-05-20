/*
WAP in C using function to merge 2 array data
in 3rd  array .
  i/p:  int a[6]={2,3,4},  b[3]={11,22,33};
  o/p: int c[6]= {2,11,3,22,4,33};
 void  in_fun(int  *a,   int *b,   int *c, int ele1,int ele2, int ele3 );
*/
#include <stdio.h>
void in_fun(int *, int *, int *, int, int, int);
void main()
{
    int a[6], b[6] = {11, 22, 33}, c[6], ele1, ele2, ele3;
    ele1 = sizeof(a) / sizeof(a[0]);
    ele2 = sizeof(b) / sizeof(b[0]);
    ele3 = sizeof(c) / sizeof(c[0]);
    printf("Enter a ele of arry:\n");
    for (i = 0; i < ele1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter b ele of arry:\n");
    for (i = 0; i < ele2; i++)
    {
        scanf("%d", &b[i]);
    }
    rintf("Enter c ele of arry:\n");
    for (i = 0; i < ele3; i++)
    {
        scanf("%d", &c[i]);
    }
    in_fun(a, b, c, ele1, ele2, ele2);
}
void in_fun(int *a, int *b, int *c, int ele1, int ele2, int ele3)
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < ele3; i++)
    {
        if (i % 2 == 0)
        {
            c[i] = a[j];
            j++;
        }
        else
        {
            c[i] = b[k];
            k++;
        }
    }
    for (i = 0; i < ele3; i++)
    {
        printf(" %d", c[i]);
    }
}