/*
   41.wap in c left roated array 1 time in same array.
   i/p: a[7]={11,21,31,41,51,61,71};
   o/p:a[7]={21,31,41,51,61,71,11};
 */
#include<stdio.h>
void main()
{
        int a[7]={11,21,31,41,51,61,71};
        int i,j,ele,temp,n;
        ele=sizeof(a)/sizeof(a[0]);
        printf("Enter a roated number:\n");
        scanf("%d",&n);
        for(j=0;j<n;j++){
                temp=a[0];
                for(i=0;i<ele;i++)
                {
                        a[i]=a[i+1];
                }
                a[ele-1]=temp;}
        for(j=0;j<ele;j++){
                printf(" %d",a[j]);
        }
}