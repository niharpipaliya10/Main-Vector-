// wap in c to sum of even digits.
#include<stdio.h>
void main(){


	int num,r,sum=0;
	printf("Enter a number :\n");
	scanf("%d",&num);

	for(;num;num=num/10){
		r=num%10;
		if(r%2==0){

			sum=sum+r;

		}

	}
	printf("sum of even digit is : %d\n",sum);


}
