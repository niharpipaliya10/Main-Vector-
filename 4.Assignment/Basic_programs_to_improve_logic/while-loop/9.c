// count odd digit more than 3.
#include<stdio.h>
void main(){

	int num,r,c=0;
	printf("Enter a number :\n");
	scanf("%d",&num);

	while(num){
		r=num%10;
		if(r%2!=0 && r>3){

			c++;

		}
		num=num/10;
	}
	printf("count odd digit more than 3 :%d\n",c);

}
