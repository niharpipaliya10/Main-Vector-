/*
1
321
54321
7654321

*/
#include <stdio.h>
void main()
{
    int i, j,a,n;
    printf("Enter a row number:\n");
    scanf("%d",&n);
    for (i = 0,a=1; i <n; i++,a=a+j+2)
    {
        for (j = 0; j <= i*2; j++,a--)
        {
            printf(" %d",a);
        }
        printf("\n");
    }
}