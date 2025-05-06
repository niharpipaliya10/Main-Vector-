/*
5.WAP in C to find sum of 1st digit of all array
i/p: int a[5]={123,23,89,3425,721};
o/p: 1+2+8+3+7 ----> 21
*/
#include<stdio.h>
void main(){

	int a[5],i,j,r,sum=0;
	printf("Enter ele of array::\n");
	for(i=0;i<5;i++){
	scanf("%d",&a[i]);
	
	}

	for(i=0;i<5;i++)
	{
	  printf(" %d",a[i]);
	  r=a[i]%10;
	  printf("%d",r);
	  sum=sum+r;
			
		



	}
	printf("\nsum=%d\n",sum);



}
