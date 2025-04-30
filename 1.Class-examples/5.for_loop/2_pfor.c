//WAP to print even digit given number.

#include<stdio.h>
void main(){

	int num,r;
	printf("Enter a number:\n");
	scanf("%d",&num);

	for(1;num;num=num/10)
        {
		r=num%10;
		if(r%2==0)
			printf("%d",r);


	}




}
