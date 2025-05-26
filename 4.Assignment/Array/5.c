/*
5.WAP in C to find sum of 1st digit of all array
      i/p:  int a[5]={123,23,89,3425,721};
     o/p:      1+2+8+3+7 ---->  21
*/
#include <stdio.h>
void main()
{
    int a[5], i, j, rev, r, sum = 0;
    printf("Enter a ele of array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {

        for (rev = 0; a[i]; a[i] = a[i] / 10)
        {
            r = a[i] % 10;
            rev = rev * 10 + r;
        }
        r = rev % 10;
        sum = sum + r;
    }
    printf("sum of all ele 1st num is:%d", sum);
}