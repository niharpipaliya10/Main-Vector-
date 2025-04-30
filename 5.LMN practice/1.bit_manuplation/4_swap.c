#include<stdio.h>
void main(){
int num1,num2;
printf("Enter a first number:\n");
scanf("%d",&num1);
printf("Enter a second number:\n");
scanf("%d",&num2);

printf("before swap number is num1=%d,num2=%d\n",num1,num2);

num1=num1^num2;
num2=num1^num2;
num1=num1^num2;

printf("After swap number is num1=%d num2=%d\n",num1,num2);




}

