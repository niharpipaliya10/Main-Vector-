/*
9.
       6  4  2
       4  2
       2
*/
#include <stdio.h>
void main()
{
    int i, j,a,c,k,n;
    printf("Enter a row number:\n");
    scanf("%d",&n);
    for (i = 0,a=n*2,c,k=n*2; i < n; i++,a=a+k)
    {   
        for (j = 0; j <n-i; j++,a=c-2)
        {
            printf(" %d",a);
            c=a;
        }
        printf("\n");
        k=k-2;
        
    }
}