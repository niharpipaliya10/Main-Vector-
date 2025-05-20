/*
1.
 WAP in C using function to sum of digit of  all
elements in array , store results in another array.
  i/p:  int a[6]={1,22,121,34,78,444};
  o/p: int b[6]= {1, 4, 4, 7, 15, 12 };
 void sum_fun(int  *a,int  *b , int ele );

*/
#include <stdio.h>
void sum_fun(int *, int *, int);
void main()
{
    int a[6], b[6], ele, i;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter a ele of arry:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    sum_fun(a, b, ele);
}
void sum_fun(int *p, int *q, int ele)
{
    int i, sum, j, r, temp;
    for (i = 0; i < ele; i++)
    {
        temp = p[i];
        for (sum = 0; temp; temp = temp / 10)
        {
            r = temp % 10;
            sum = sum + r;
        }
        q[i] = sum;
    }

    for (j = 0; j < i; j++)
    {
        printf(" %d", q[j]);
    }
}