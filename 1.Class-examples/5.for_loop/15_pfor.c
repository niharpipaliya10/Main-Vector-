//wap in c to print binary of given number inb reverce order.

#include<stdio.h>
void main(){

	int num,pos,m;
	printf("Enter a number is : ");
	scanf("%d",&num);
	printf("given number binary is:\n");
	for(pos=31;pos>=0;pos--){

		m = num>>pos&1;
		printf("%d",m);

	}

     printf("aftern reverce binary is: \n");

     for(pos=0;pos<=31;pos++){
       
       m=num>>pos&1;
       printf("%d",m);
     
     }
}
