// count even digit more than 4.
#include<stdio.h>
void main(){
	int num,r,c=0;
	printf("Enter a number :\n");
	scanf("%d",&num);

	while(num){
		r=num%10;
		if(r%2==0){
			if(r>4){
				c++;
			}
		}
		num=num/10;
	}
	printf("count even digit more than 4 is :%d\n",c);
}
