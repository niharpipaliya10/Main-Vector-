#include<stdio.h>
void main(){

int num,a,b;

printf("Enter your number...\n");
scanf("%d",&num);
printf("your number is %d",num);

a=num%10;
num=num/10;
b=num%10;
num=num/10;
num = num+b+a;
printf("your 3 digit sum is %d",num);







}
