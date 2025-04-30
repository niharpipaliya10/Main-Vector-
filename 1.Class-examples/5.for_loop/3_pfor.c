//wap to print pov of 2 digit the given number.


#include<stdio.h>
void main(){

	int num,r;
	printf("Enter a number:\n");
	scanf("%d",&num);

/*	if((num&num-1)==0){
	printf("num is pow of two");
	
	}else{
	
	printf("num is not pow of 2");
	}*/

	for(1;num;num=num/10)
        {
		r=num%10;
		if((r&r-1)==0)
			printf("%d ",r);


	}




}
