/*
4.WAP in C to find sum of all array elements.
i/p: int a[5]={10,20,30,40,50};
o/p: 150
*/
#include<stdio.h>
void main(){

int a[5],i,sum=0;
printf("Enter ele of array:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
     sum=sum+a[i];

}
printf("sum of all ele of array is:%d\n",sum);



}
