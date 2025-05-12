/*
WAP in C to replace prime index ele with 0 in array.
     i/p:  int a[8]={11,22,33,44,55,66,77,88};
    o/p:  int a[8]={11,22,0 ,0 ,55,0 ,77,0 }
*/
#include <stdio.h>
void main()
{
    int a[8];
    int i, j, ele, c;
    ele = sizeof(a) / sizeof(a[0]);
    printf("Enter a array ele:\n");
    for(i=0;i<ele;i++){
        scanf("%d",&a[i]);
    }
    for (i = 0; i < ele; i++)
    {
        for (j = 1, c = 0; j <= i; j++)
        {
            if (i % j == 0)
                c++;
        }
        if (c == 2)
        {
            a[i] = 0;
        }
    }
    for (i = 0; i < ele; i++)
    {
        printf(" %d", a[i]);
    }
}