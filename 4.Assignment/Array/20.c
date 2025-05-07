/*
20.WAP to C to insert 10 on sorted place in sorted array
i/p: int a[7]={2,3,5,7,11,13 }, num= 10;
o/p: int a[7]={2,3,5,7, 10, 11,13}

*/
#include<stdio.h>
void main(){

	int a[7]={2,3,5,7,11,13},i,r,j;
	for(i=0;i<7;i++)
	{
		printf(" %d",a[i]);
	}
	a[6]=10;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
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
