//wap in c to sum of digit divisible by 3.

#include<stdio.h>
void main(){

	int num,r,sum=0;
	printf("Enter a number :\n");
	scanf("%d",&num);
l:  
	r=num%10;
	num =num/10;
	if(r%3==0){

		sum =sum+r;
	}
	if(num){
		goto l;
	}
        printf("sum of digit divisible by 3 is :%d\n",sum);


}

