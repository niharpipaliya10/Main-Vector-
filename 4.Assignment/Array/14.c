/*
14.WAP in C to print second smallest element in array.
i/p : int a[7]={2,2,1,5,5,4,4};
o/p : second small = 2
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
	

	for(i=0;i<ele;i++)
	{

		if(a[i]<s)
		{
			sl=s;
			s=a[i];
		}
		else if(a[i]<sl && a[i]!=s)
		{
		sl=a[i];
		}
}
printf("\n sl=%d\n",sl);


}