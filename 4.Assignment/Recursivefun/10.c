/*
10.WAP in C using Recursive  function to sum of
half of array element.
    i/p:  int a[6]={10,20,30,44,55,66};
         o/p:  sum =  60
   int rec_fun_sum_arr( int  *p,  int ele  );

*/
#include <stdio.h>
int rec_fun_sum_arr(int *, int);
void main()
{
    int a[6] = {10, 20, 30, 44, 55, 66};
    int ele, s;
    ele = sizeof(a) / sizeof(a[0]);
    s = rec_fun_sum_arr(a, ele/2);
    printf("sum=%d\n", s);
}
int rec_fun_sum_arr(int *p, int ele)
{
    static int sum;
    
    if (ele >0)
    {
        sum = sum + *p;
        rec_fun_sum_arr(p + 1, ele - 1);
    }
    return sum;
}