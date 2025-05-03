// sum of odd digit
#include<stdio.h>
void main(){

int num,r,sum=0;
printf("Enter a number:\n");
scanf("%d",&num);
do{
r=num%10;
if(r%2!=0){
sum=sum+r;
}
num=num/10;
}while(num);
printf("sum of odd digit is:%d\n ",sum);
}
