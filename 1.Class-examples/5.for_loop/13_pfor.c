//wap given number is prime or not.
#include<stdio.h>
void main(){

	int num,i,c=0;
	printf("Enter a number is:\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++){

		if(num%i==0){
			c++;
		}
	}

	if(c==2){
		printf("number is prime.");
	}else{
		printf
			("number is not prime.");
	}


}
