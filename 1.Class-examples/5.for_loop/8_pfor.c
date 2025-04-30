//write a single line logic binary print.
#include<stdio.h>
void main(){
	int num,pos;
	printf(" enter a number :\n");
	scanf("%d",&num);
	for(pos=31;pos>=0;pos--){

		printf("%d",num>>pos&1);

	}
}

