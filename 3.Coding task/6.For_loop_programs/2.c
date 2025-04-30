// wap in c to count digit more than 5.

#include<stdio.h>
void main(){
	int num,r,c=0;
	printf("Enter a number:\n");
	scanf("%d",&num);

	for(;num;num=num/10){
		r=num%10;
		if(r>5){
			c++;}
	}
	printf("count digit more than 5 is :%d\n ",c);

}
