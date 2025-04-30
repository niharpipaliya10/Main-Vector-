//Wap in c to product of last 2 digits of number.
#include<stdio.h>
void main(){
	int num,r1,r2=1,c=0;
	printf("Enter a number :\n");
	scanf("%d",&num);

l:	r1=num%10;
	num=num/10;
	r2=r2*r1;
	c++;
	if(c<3){

		goto l;
	}




	printf("mul of odd digtit :%d\n",r2);

}
