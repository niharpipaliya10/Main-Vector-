/*
19.WAP to C to insert 51 on 3rd index in same array .
i/p: int a[7]={2,3,5,7,11,13 },in=3 ,num=51;
o/p: int a[7]={2,3,5,51,7,11,13}
*/
#include<stdio.h>
void main()
{

	int a[7],i,j;
	printf("Enter ele of array:\n");
	for(i=0;i<6;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		printf(" %d",a[i]);
	}

	for(i=6;i>=3;i--)
	{

		a[i]=a[i-1];   
	}
	printf("\n");
	a[3]=51;
	for(i=0;i<7;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");

}