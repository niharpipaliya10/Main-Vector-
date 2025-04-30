// wap in c to count odd digit in given any number.

#include<stdio.h>
void main(){

	int num,c=0,r;
	printf("Enter a number :\n");
        scanf("%d",&num);
l:
	r=num%10;
	num=num/10;
	if(r%2!=0){
		c++;
	}
        if(num!=0)
	goto l;

	printf(" count of digit is : %d\n",c);



}
