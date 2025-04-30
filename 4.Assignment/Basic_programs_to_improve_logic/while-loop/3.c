// sum of digit more than 5.
#include<stdio.h>
void main(){
	int num,sum=0,r;
	printf("Enter a number:\n");
	scanf("%d",&num);

	while(num){
		r=num%10;
		if(r>=5){
			sum=sum+r;
		}
		num=num/10;
	}
	printf("sum of digit more 5 is :%d",sum);

}

