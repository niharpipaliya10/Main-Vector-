/*
11.
WAP in C using Recursive  function to reverse
array elements and print array in main .
  i/p:  int a[6]={11,22,33,44,55,66};
       o/p: a[6]={66,55,44,33,22,11};
   void rec_fun_rev_arr( int  *p,  int *q );
*/
#include <stdio.h>
void rec_fun_rev_arr(int *, int *);
void main()
{
  int a[6] = {11, 22, 33, 44, 55, 66}, ele, i;
  ele = sizeof(a) / sizeof(a[0]);
  rec_fun_rev_arr(a, a + ele-1);
  for (i = 0; i < ele; i++)
  {
    printf(" %d", a[i]);
  }
}
void rec_fun_rev_arr(int *p, int *q)
{


  if (p < q)

  {
    int t = *p;
    *p = *q;
    *q = t;
  
    rec_fun_rev_arr(p+1, q-1);
  }
}