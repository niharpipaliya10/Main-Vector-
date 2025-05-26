/*
35.WAP in C to print and count perfect in array .
i/p: int a[7]={3,4,5,6,7,28,9};
o/p: 6 28 , count= 2
*/
#include<stdio.h>
void main()
{
int a[7],ele,i,j,sum,c=0;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++){
    scanf("%d",a[i]);
}
for(i=0;i<ele;i++)
{
   for(j=1,sum=0;j<a[i];j++)
   {
       if(a[i]%j==0){
           sum=sum+j;
       }
   }
   if(sum==a[i]){
           printf(" %d",a[i]);
   c++;
   }
}

printf("count=%d",c);

}