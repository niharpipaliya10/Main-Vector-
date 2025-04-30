//wap to check given number is perfact or not.

#include<stdio.h>
void main(){

	int num,i,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&num);

	for(i=1;i<num;i++){

		if(num%i==0){
			sum=sum+i;
		}
	}

	if(sum==num){
		printf("number is perfact");
	}else{
		printf("number is not a perfect.");
	}


}
