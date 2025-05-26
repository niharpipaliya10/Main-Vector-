/*
34. WAP in C to print and count prime in array .
i/p: int a[7]={3,4,5,6,7,8,9};
o/p: 3 5 7 , count= 3
*/
#include<stdio.h>
void main()
{
int a[7],ele,i,j,c,d=0;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
scanf("%d",a[i]);
}

for(i=0;i<ele;i++)
{
     for(j=1,c=0;j<=a[i];j++)
     {
          if(a[i]%j==0)
          {
          c++;
          }
     }
          if(c==2)
          {
          printf(" %d",a[i]);
          d++;
          }
}

printf("\ncount=%d\n",d);
}