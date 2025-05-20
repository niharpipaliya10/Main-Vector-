/*
2.WAP in C using function to reverse  all elements
of array ,store results in another array.
  i/p:  int a[6]={12,42,123,34,78,414};
  o/p: int b[6]={21,24,321,43,87,414};
    void rev_fun(int  *a,int  *b , int ele );
*/
#include <stdio.h>
void sum_fun(int *, int *, int);
void main()
{
    int a[6], b[6], ele,i;
    ele = sizeof(a) / sizeof(a[0]);
    rintf("Enter a ele of arry:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    sum_fun(a, b, ele);
}
void sum_fun(int *p, int *q, int ele)
{
    int i, rev, j, r, temp;
    for (i = 0; i < ele; i++)
    {
        temp = p[i];
        for (rev = 0; temp; temp = temp / 10)
        {
            r = temp % 10;
            rev = rev * 10 + r;
        }
        q[i] = rev;
    }

    for (j = 0; j < i; j++)
    {
        printf(" %d", q[j]);
    }
}