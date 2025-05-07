/*
15. WAP in C to swap 3rd ele with 4th ele in array .
i/p: int a[6]={11,22,33,44,55,66};
o/p: 11 22 33 55 44, 66
*/
#include<stdio.h>
void main(){

	int a[6],r,i;
	printf("Enter a ele of array:\n");
	for(i=0;i<6;i++){
	scanf("%d",&a[i]);
	}
	r=a[3];
	a[3]=a[4];
	a[4]=r;
	for(i=0;i<6;i++){
		printf(" %d",a[i]);
	}


}
