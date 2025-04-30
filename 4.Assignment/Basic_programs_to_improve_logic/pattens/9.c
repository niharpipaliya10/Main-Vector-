/*
9.
       6  4  2
       4  2
       2
*/
#include <stdio.h>
void main()
{
    int i, j,a=6,c,k=6;
    for (i = 0; i < 3; i++,a=a+k)
    {   
        for (j = 0; j <3-i; j++,a=c-2)
        {
            printf("%d",a);
            c=a;
        }
        printf("\n");
        k=k-2;
        
    }
}