/*
12. WAP in C to  print  Smallest element in array.
     i/p :  int a[6]={2,2,3,5,5,4};
     o/p :    res  = 2
*/
#include <stdio.h>
void main()
{
    int a[6] = {2, 2, 3, 5, 5, 4}, i, a;
    s = a[0];
    for (i = 0; i < 6; i++)
    {
        if (a[i] < a[i + 1])
        {
            s = a[i];
        }
    }
    printf("%d", s);
}