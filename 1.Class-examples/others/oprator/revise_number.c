#include<stdio.h>
void main(){
int num=1549,r1,r2,r3,r4;
printf("Before number %d\n",num);
r1=num%10;
num=num/10;
r2=num%10;
num=num/10;
r3=num%10;
num=num/10;

r4=r1*1000+r2*100+r3*10+num;
printf("After number %d\n",r4);}



