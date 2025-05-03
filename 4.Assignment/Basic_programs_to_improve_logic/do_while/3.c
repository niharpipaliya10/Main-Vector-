//sum of digit more than 5.
#include<stdio.h>
void main(){

int num,r,sum=0;
printf("Enter a number ;\n");
scanf("%d",&num);
do{
r=num%10;
if(r>=5)
 sum=sum+r;
num=num/10;
}while(num);
printf("sum of digit more than 5 is:%d\n",sum);



}
