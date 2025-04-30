// sum of digit less than 7
#include<stdio.h>
void main(){

	int num,r,sum=0;
	printf("Enter a number is:\n");
	scanf("%d",&num);

	while(num){
		r=num%10;
	       if(r<7){

			sum=sum+r;

		}
		num=num/10;
	}
	printf("sum of digit less than 7 is :%d\n",sum);
}
