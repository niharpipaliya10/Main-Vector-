//sum of digit
#include<stdio.h>
void main(){

int num,r,sum=0;
printf("Enter a number:\n");
scanf("%d",&num);
do{
r=num%10;
sum=sum+r;
num=num/10;
}while(num);
printf("sum of digit is : %d\n",sum);
}
