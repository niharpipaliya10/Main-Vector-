#include<stdio.h>
void main(){

int num,a;
printf("Enter your number...\n");
scanf("%d",&num);

printf("befor swap number is %d\n",num);


a=num%10;
num=num/10;

printf("your swap number is %d",a*10+num);


}


