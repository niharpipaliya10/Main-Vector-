/*
32.WAP in C to product of digit of all array elements.
i/p: int a[5]={11,202,234,456,90};
o/p: int a[5]={1, 0, 24, 120, 0};
*/
#include<stdio.h>
void main()
{
        int a[5],r,mul=1,i;
        int b[5],k,j,ele;
        ele=sizeof(a)/sizeof(a[0]);
        for(i=0;i<ele;i++){
        scanf("%d",&a[i]);
        }
        for(i=0,k=0;i<ele;i++)
        {
            for(j=0,mul=1;a[i];a[i]=a[i]/10)
            {
               r=a[i]%10;
              // printf("%d",r);
              mul=mul*r;
            }
            b[k]=mul;
            k++;
        }

        for(i=0;i<ele;i++)
        {
        printf(" %d",b[i]);
        }
}