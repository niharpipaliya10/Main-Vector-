/*
123456
12345
1234
123
12
1
*/

#include<stdio.h>
void main(){
	int i,j,a,num;
	printf("Enter a row number:\n");
	scanf("%d",&num);

	for(i=0;i<num;i++){
		for(j=0,a=1;j<num-i;j++,a++){
			printf("%d",a);
		}
		printf("\n");

	}

}
