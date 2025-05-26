/*
31.WAP in C to count all duplicate elements from array.
        i/p:  a[10]={3,3,2,4,4,2,5,3,4,9}
     o/p:  3 ->3 times ,2-> 2 times , 4-> 3 times
*/
#include <stdio.h>
void main()
{
    int a[10] = {3, 3, 2, 4, 4, 2, 5, 3, 4, 9};
    int ele, i, j, c = 0, d;
    ele = sizeof(a) / sizeof(a[0]);

    for (i = 0; i < ele; i++)
    {    
        
        d=1;

        for (j = i + 1; j < ele; j++)
        {
            if (a[i] == a[j])
            {

                d++;
            }
        }
        if (d >1)
            printf(" %d=%d", a[i] = d);
    }
}