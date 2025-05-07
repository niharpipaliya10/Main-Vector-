/*
12. WAP in C to print Smallest element in array.
i/p : int a[6]={2,2,3,5,5,4};
o/p : res = 2
*/
#include<stdio.h>
void main(){

	int a[6],ele,i,s;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter a ele of array:\n");
	for(i=0;i<ele;i++)
	{
	scanf("%d",&a[i]);
          }
	s=a[0];
	for(i=0;i<ele;i++){

		if(a[i]<s){
			s=a[i];
		}

	}
	printf("smallest ele of a is :%d\n",s);

}
