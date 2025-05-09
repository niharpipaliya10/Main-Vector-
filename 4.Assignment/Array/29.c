/*
   29. WAP in C to delete duplicate elements from array .
   i/p: a[10]={3,3,2,4,4,1,2,3,7,9}
   o/p: a[10]={3,2,4,1,7,9};
 */
#include<stdio.h>
void main()
{

	int a[10]={3,3,2,4,4,1,2,3,7,9},i,k,j,c=0;
	/*printf("Enter a ele of array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}*/
	for(i=0;i<10-c;i++)
	{
		for(k=1;k<10-c;k++)
		{
			if(a[i]==a[k])
			{
				c++; 
				for(j=i;j<10;j++)
				{
					a[j]=a[j+1];


				}
				//k--;

			}
		}
	}
	for(i=0;i<10-c;i++){
		printf(" %d",a[i]);

	}

}
