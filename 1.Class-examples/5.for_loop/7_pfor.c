//wap to revers the digit of a given number.

#include<stdio.h>
void main(){
	int num,rev=0,r;
	printf("Enter a number :\n ");
	scanf("%d",&num);

	for(;num;num=num/10)
	{
		r=num%10;
		rev=rev*10+r;
	}
	printf("reverse number is :%d\n",rev);

}

