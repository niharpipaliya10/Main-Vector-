#include<stdio.h>

void main(){

int num;
printf("Enter a number:\n");
scanf("%d",&num);

num = num & 7;
num==0?printf("number is divisable  by 8"):printf("number is not  divisable by 8");




}
