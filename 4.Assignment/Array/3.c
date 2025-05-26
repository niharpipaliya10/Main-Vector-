/*
WAP in C to sort 1st 4 ele of array in decending .
i/p: int a[7]={5,3,1,2,1,9,6};
o/p: 5 3 2 1 1 9 6
*/
#include<stdio.h>
void main(){

	int ele,i,r,j;
	printf("Enter number of  ele:\n");
	scanf(" %d",&ele);
	int a[ele];
	printf("Ente a ele of array:\n");
	for(i=0;i<ele;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<ele;i++)
	{
		printf(" %d",a[i]);

	}
          printf("\n");
	for(i=0;i<ele-4;i++)
	{
		for(j=0;j<ele-4-i;j++)
		{
			if(a[j]<a[j+1])
			{
				r=a[j];
				a[j]=a[j+1];
				a[j+1]=r;
			}
		}
	}

	for(i=0;i<ele;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
}

































