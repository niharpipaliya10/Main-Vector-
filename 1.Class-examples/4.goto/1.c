// write a program in c to display multiplication table of given num.
#include<stdio.h>
void main(){

	int num,i=1;
	printf("Enter a number:\n");
	scanf("%d",&num);
l1:
	printf("%d * %d =%d\n",num,i,num*i);
	//i++;
	//if(i++<=10) that not use because in last i is increment as 11 that proced so.
        if(++i<=10)
		goto l1;
}




