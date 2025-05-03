//sum of last 3 digit.
#include<stdio.h>
void main(){

int num,r,c=0,sum=0;
printf("Enter a number ;\n");
scanf("%d",&num);
do{
r=num%10;
sum=sum+r;
num=num/10;
c++;
}while(c<3);
printf("sum of last 3 digit  in num is:%d\n",sum);



}
