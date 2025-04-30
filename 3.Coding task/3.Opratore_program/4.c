#include<stdio.h>
void main(){
int num,r1,r2;
printf("Enter your number...\n");
scanf("%d",&num);

r1=num%10;
num=num/100;

num=num*10+r1;

printf("you number second last digit is %d",num);
}

