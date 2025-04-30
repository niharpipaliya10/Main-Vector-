/*
1
13
135
1357
*/

#include<stdio.h>
void main(){

	int i,j,a,num;
	printf("Enter a row number:\n");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		for(j=0,a=1;j<=i;j++,a=a+2){
			printf("%d ",a);
		}
		printf("\n");

	}


}
