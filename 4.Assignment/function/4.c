/*
4.
WAP in C using function to count strong and
armstrong number elements in array .
  i/p:  int a[6]={2,153,145,2,3,153};
 o/p:  strong number count = 3
   armstrong number count = 5
 int strong_fun(int  *a,  int ele );
 int armstrong_fun(int  *a,  int ele );

*/
#include <stdio.h>
int strong_fun(int *, int);
int armstrong_fun(int *, int);
void main()
{
    int a[6], i, ele, s, A;
    ele = sizeof(a) / sizeof(a[0]);
    rintf("Enter a ele of arry:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    s = strong_fun(a, ele);
    printf("strong count= %d\n", s);
    A = armstrong_fun(a, ele);
    printf("arnstrong count= %d\n", A);
}
int strong_fun(int *a, int ele)
{
    int i, c = 0, temp, sum, mul, r, j;
    for (i = 0; i < ele; i++)
    {
        temp = a[i];
        for (sum = 0; temp; temp = temp / 10)
        {
            r = temp % 10;
            for (j = 1, mul = 1; j <= r; j++)
            {
                mul = mul * j;
            }
            sum = sum + mul;
        }
        if (sum == a[i])
        {
            c++;
        }
    }
    return c;
}
int armstrong_fun(int *a, int ele)
{
    int i, c = 0, temp, sum, mul, r, j, d;
    for (i = 0; i < ele; i++)
    {
        temp = a[i];
        for (d = 0; temp; temp = temp / 10, d++)
            ;
        temp = a[i];
        for (sum = 0; temp; temp = temp / 10)
        {
            r = temp % 10;
            for (j = 0, mul = 1; j < d; j++)
            {
                mul = mul * r;
            }
            sum = sum + mul;
        }
        if (sum == a[i])
        {
            c++;
        }
    }
    return c;
}
