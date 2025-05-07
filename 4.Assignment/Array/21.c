/*
21.WAP to C to insert 99 on 0th , 88 on 1st index in
same array .
i/p: int a[9]={30,11,45,34,14,8 ,50 },num=99 ;
o/p: int a[9]={99,88, 30,11,45,34,14,8, 50};

*/
#include<stdio.h>
void main()
{

	int a[9],i,j;
		printf("Enter ele of array:\n");
	for(i=0;i<7;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		printf(" %d",a[i]);
	}

	for(i=8;i>=0;i--)
	{

		a[i]=a[i-2];   
	}
	printf("\n");
	a[0]=99;
	a[1]=88;
	for(i=0;i<9;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");

}
