// wap to get sum of the digit of a given number.
#include<stdio.h>
void main(){

	int num ,r,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&num);

	for(;num;num=num/10){
		r=num%10;
		sum=sum+r;



	}
	printf("sum of all digit is :%d\n",sum);

}
