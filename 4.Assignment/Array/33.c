/*
33.WAP in C to store factorial of array in another array.
i/p: int a[4]={ 4, 5, 6, 4};
o/p: int b[4]={24,120,720,24}
*/
#include<stdio.h>
void main()
{
        int a[4],i,ele;
        int b[4],k,j,mul;
        ele=sizeof(a)/sizeof(a[0]);
        printf("Enter array element:\n");
        for(i=0;i<ele;i++)
        {
          scanf("%d",&a[i]);
        }
        for(i=0,k=0;i<ele;i++)
        {
                for(j=1,mul=1;j<=a[i];j++)
                {
                        mul=mul*j;
                }
                b[k]=mul;
                k++;
        }
        for(i=0;i<ele;i++)
        {
                printf(" %d",b[i]);
        }
}