// count odd digit in num
#include<stdio.h>
void main(){
	int num,r,c=0;
	printf("Enter a number:\n");
	scanf("%d",&num);

	while(num){

		r=num%10;
		if(r%2!=0){
			c++;

		}
		num=num/10;

	}
	printf("count of odd digti is :%d\n",c);


}
