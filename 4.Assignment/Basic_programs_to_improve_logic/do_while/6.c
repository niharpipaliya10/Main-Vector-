//count  digit in num.
#include<stdio.h>
void main(){

int num,r,c=0;
printf("Enter a number ;\n");
scanf("%d",&num);
do{
r=num%10;
c++;
num=num/10;
}while(num);
printf("count of  digit in num is:%d\n",c);



}
