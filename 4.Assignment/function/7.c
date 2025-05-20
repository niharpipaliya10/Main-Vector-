/*
7.
WAP in C using function to insert num in array
at given particular location (index).
  i/p:  int a[6]={-1,2,3,-5,-7};  , n= 99 , p=2
  o/p: int a[6]= {-1, 2 ,99 ,3,-5, -7};
  void  in_fun(int  *a, int ele,int n, int p );
*/
#include <stdio.h>
void in_fun(int *, int, int, int);
void main()
{
    int a[6], i, n, p = 2, ele;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter a ele of arry:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a number:\n ");
    scanf(" %d", &n);
    printf("enter a position:\n");
    scanf("%d", &p);
    in_fun(a, ele, n, p);
}
void in_fun(int *a, int ele, int n, int p)
{

    for (int j = ele; j > p; j--)
    {
        a[j] = a[j - 1];
    }
    a[p] = n;

    for (int i = 0; i < ele; i++)
    {
        printf(" %d", a[i]);
    }
}