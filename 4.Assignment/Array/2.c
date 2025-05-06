/*
   2. WAP in C to sort array in decending order .
   i/p: int a[5]={11,55,88,22,44}, *p ;
   o/p: 88 55 44 22 1
 */

#include<stdio.h>
void main(){

	int ele,i,r;
	int *p,j;
        printf("Enter number  of ele:\n");
	scanf("%d",&ele);
	int a[ele];
	p=a;
	printf("Enter ele i9n array:\n");
	for(i=0;i<ele;i++)
	{
	 scanf("%d",p+i);
	
	}
	
	for(i = 0;i < ele;i++)
	{
		printf(" %d",*(p+i));
	}
	printf("\n");
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{

			if( (*(p+j)) > (*(p+j+1)) )
			{

				r = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = r;
			}	
		}
	}

		for(i=0;i<ele;i++)
		{
			printf("%d ",*(p+i));
		}


}
