#include<stdio.h>
void main(){

	int num,r,sum=0,mul=1;
	printf("Enter a number:\n");
	scanf("%d",&num);

	for(1;num;num=num/10){

		r= num % 10;
		if(r%2==0){
			sum=sum+r;
			//printf(" sum of even digit :%d",sum);
		}else {
			mul=mul*r;
			//printf("mul of odd digtit :%d",mul);
		}

		
	}

			printf(" sum of even digit :%d\n",sum);

			printf("mul of odd digtit :%d\n",mul);




}
