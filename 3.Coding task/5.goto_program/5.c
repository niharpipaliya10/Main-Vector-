// wap in c to sum of alternate digit.
#include<stdio.h>
void main(){
	int num,r,c=0,sum=0,rev=0;
	printf("Emter a number is:\n");
	scanf("%d",&num);
l:
	r=num%10;
	num=num/10;
	rev =rev*10+r;	
	if(num){
		goto l;
	}

l1:

	r=rev%10;
	rev=rev/10;
	c++;
	if(c%2!=0){
		sum =sum+r;
	}
	if(rev){
		goto l1; 
	}

	printf(" sum of alternate digits is :%d\n",sum);

}
