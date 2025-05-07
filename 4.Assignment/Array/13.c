/*
13.WAP in C to print second largest element in array.
i/p : int a[7]={2,2,3,5,5,4,4};
o/p : second large = 4
*/
#include<stdio.h>
void main(){

	int a[7],ele,i,sl,s;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter ele of array:\n");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1])
	{
		s=a[0];
		sl=a[1];
		i=2;

	}
	else if(a[1]>a[0])
	{
		s=a[1];
		sl=a[0];
		i=2;
	}else
	{
		s=0;
		sl=0;
		i=0;

	}

	for(i=0;i<ele;i++)
	{

		if(a[i]>s)
		{
			sl=s;
			s=a[i];
		}
		else if(a[i]>=sl && a[i]!=s)
		{
			sl=a[i];
		}

	}
	printf("\n sl=%d\n",sl);

}
