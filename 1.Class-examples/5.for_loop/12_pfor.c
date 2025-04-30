//wap to count and add the factor of the given number.
#include<stdio.h>
void main(){

	int num,i,c=0,sum=0;
	printf("Enmter a number is:\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++){
		if(num%i==0){

			c++;
			sum=sum+i;
		}


	}

	printf("count of factor and sum of factor for given number is:\ncount=%d sum=%d",c,sum);




}
