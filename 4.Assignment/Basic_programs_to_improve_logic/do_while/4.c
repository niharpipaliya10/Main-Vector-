//sum of digit less than 7.
#include<stdio.h>
void main(){

int num,r,sum=0;
printf("Enter a number ;\n");
scanf("%d",&num);
do{
r=num%10;
if(r<=7)
 sum=sum+r;
num=num/10;
}while(num);
printf("sum of digit less than 7 is:%d\n",sum);



}
