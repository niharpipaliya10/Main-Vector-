// sum of digti.
#include<stdio.h>
void main(){
	int num,r,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&num);

	while(num){

		r=num%10;
		sum=sum+r;
		num=num/10;


	}


   printf("sum of digit id: %d\n",sum);
}
