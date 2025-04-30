// wap in c to sum of last 3 digit of number.

#include<stdio.h>
void main(){

	int num,sum=0,r,c=0;
	printf("Enter a number :\n");
	scanf("%d",&num);
l1:
	r=num%10;
	num=num/10;
	sum=sum+r;
	c++;
	if(c<3){
		goto l1;
	}


printf("sum of last 3 digit of number is :%d ",sum);




}
