//wap to print each digit the given number.

#include<stdio.h>
void main(){

	int num,i;
	printf("Enter a number:\n");
	scanf("%d",&num);

	for(;num;num=num/10){
		i=num%10;
		printf("%d\n",i);
	}

}
