//wap to check given number is palidrom or not.
#include<stdio.h>
void main(){

	int temp,num,rev=0,r;
	printf("Enter a number is:\n");
	scanf("%d",&num);
	temp=num;
	for(;temp;temp=temp/10){
		r=temp%10;
		rev=rev*10+r;
	}
	if(rev==num){
		printf("number is palidrom.\n");
	}else{

		printf("number is not palidrom.\n");
	}

}
