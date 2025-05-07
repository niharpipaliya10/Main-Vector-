/*
17. WAP in C to sort 1st 3 element of array .
i/p: int a[7]={11,33,22,2,9,1,6};
o/p: 11 22 33 2 9 1 6
*/
#include<stdio.h>
void main(){
 
 int a[7],i,j,r;
 printf("Enter ele of array:\n");
 for(i=0;i<7;i++){
 scanf("%d",&a[i]);
 }

/* for(i=0;i<7;i++)
 {
 printf(" %d",a[i]);
 }*/

 for(i=0;i<4-1;i++)
 {
    for(j=0;j<3-1-i;j++)
    {

       if(a[j]>a[j+1])
       {
           r=a[j];
	   a[j]=a[j+1];
	   a[j+1]=r;
       }
    
    
    }
 
 }
printf("\n");
 for(i=0;i<7;i++)
 {
 printf(" %d",a[i]);
 }
}
