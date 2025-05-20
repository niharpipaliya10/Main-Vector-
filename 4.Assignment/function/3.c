/*
3.WAP in C using function to delete 1st digits of
all elements in array .
  i/p:  int a[6]={12,142,1234,314,78,414};
  o/p: int a[6]={2,42,234,34,8,14};
    void del_fun(int  *a,  int ele );
*/
#include <stdio.h>
void del_fun(int *, int);
void main()
{
    int a[6], ele,i;
    ele = sizeof(a) / sizeof(a[0]);
    rintf("Enter a ele of arry:\n");
    for (i = 0; i < ele; i++)
    {
        scanf("%d", &a[i]);
    }
    del_fun(a, ele);
}
void del_fun(int *a, int ele)
{
    int i, r, temp, rev;
    for (i = 0; i < ele; i++)
    {
        temp = a[i];
        for (rev = 0; temp; temp = temp / 10)
        {
            r = temp % 10;
            rev = rev * 10 + r;
        }
        rev = rev / 10;
        a[i] = rev;
        temp = a[i];
        for (rev = 0; temp; temp = temp / 10)
        {
            r = temp % 10;
            rev = rev * 10 + r;
        }
        a[i] = rev;
    }
    for (i = 0; i < ele; i++)
    {
        printf(" %d", a[i]);
    }
}