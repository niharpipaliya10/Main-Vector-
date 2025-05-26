/*
36. WAP in C to print and count strong in array .
i/p: int a[7]={2,4,2,6,145,28,1};
o/p: 2 2 145 1 ,count= 4
*/
#include<stdio.h>
void main()
{
        int a[7],i,j,c=0;
        int mul,sum,r,ele,temp;
        ele = sizeof(a)/sizeof(a[0]);
       printf("Enter ele of array:\n");
      for(i=0;i<ele;i++)
        {
        scanf("%d",&a[i]);
        }
        for(i=0;i<ele;i++)
        {  temp=a[i];
                for(sum=0;temp;temp=temp/10)
                {
                        r=temp%10;
                        for(j=1,mul=1;j<=r;j++)
                        {
                                mul=mul*j;
                        }
                        sum=sum+mul;
                }
                if(sum==a[i])
                {
                        printf(" %d",a[i]);
                        c++;
                }
        }
        printf("\ncount=%d\n",c);
}