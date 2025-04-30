// wap in c to print even factor of 512;

#include<stdio.h>
void main(){

	int num,i=1;
	printf(" Enter a number: \n  ");
	scanf("%d",&num);

	for(i;i<=num;i++){
		if(num%i==0){
			if(i%2==0){
				printf("%d\n",i);
			}
		}

	}
}
