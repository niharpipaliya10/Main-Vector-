/*
9.
WAP in C using Recursive  function to count
array element less than 99 more than 39.
i/p:  int a[6]={71,53,145,21,49,153};
         o/p:  count = 3
  int rec_fun_count_arr( int  *p,  int ele  )
*/
#include <stdio.h>
int rec_fun_count_arr(int *, int);
void main()
{
    int a[6] = {71, 53, 145, 21, 49, 153};
    int ele, count;
    ele = sizeof(a) / sizeof(a[0]);
    count = rec_fun_count_arr(a, ele);
    printf("count=%d\n", count);
}
int rec_fun_count_arr(int *p, int ele)
{
    static int c;
    if ( ele>0)
    {
        if (*p > 39 && *p < 99)
        {
            c++;
        }
    
        rec_fun_count_arr( p+1, ele-1);
    }
    return c;
}