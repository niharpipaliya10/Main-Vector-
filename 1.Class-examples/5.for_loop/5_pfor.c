//wap a program to print  count of digit of the given number
#include<stdio.h>
void main(){

	int num,r,c=0;
	printf("Enter a number is:\n");
	scanf("%d",&num);

	for(;num;num=num/10){

		r=num%10;
		c++;

	}
	printf("count of digit is:%d\n",c);


}
