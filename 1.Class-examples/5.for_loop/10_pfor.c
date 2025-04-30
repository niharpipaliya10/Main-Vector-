//write a program to print multiplication of first and last digit of the given number.
#include<stdio.h>
void main(){

	int num,temp,r,c=0,d=0,mul=1;
	printf("Enter a number :\n");
	scanf("%d",&num);
	temp=num;
	for(;temp;temp=temp/10,c++);
	for(;num;num=num/10){

		r=num%10;
		d++;
		if(d==1||d==c){
			mul = mul * r; 
		}



	}
	printf(" first  and last digit multiplication is:%d",mul);



}
