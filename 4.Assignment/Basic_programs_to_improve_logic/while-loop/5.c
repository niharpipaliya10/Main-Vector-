//sum of digit in b/w 3 to 8.
#include<stdio.h>
void main(){

	int num,sum=0,r;
	printf("Enter a number :\n");
	scanf("%d",&num);

	while(num){
		r=num%10;
		if(r>=3&&r<=8){
			sum=sum+r;
		}
		num=num/10;
	}
	printf("sum of digit in b/w 3 to 8 is :%d\n",sum);
}
