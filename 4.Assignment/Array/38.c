/*
38.WAP in C to right rotate array 1 times in same array.
       i/p:  int a[7]={11,21,31,41,51,61,71};
      o/p:  int a[7]={71,11,21,31,41,51,61};
*/
#include <stdio.h>
void main()
{
    int a[7] = {11, 21, 31, 41, 51, 61, 71}, i, ele;
    ele = sizeof(a) / sizeof(a[0]);

    for (i = 1; i < ele; )
    {     
        a[i] = a[i - 1];
        
    }
    // a[0] = a[5];

    for (i = 0; i < ele; i++)
    {
        printf(" %d", a[i]);
    }
}