//sum of even digit.
#include<stdio.h>
void main(){

int num,r,c=0;
printf("Enter a number ;\n");
scanf("%d",&num);
do{
r=num%10;
if(r%2==0)
     c=c+r;
num=num/10;
}while(num);
printf("count of even  digit b/w 1 to 7 in num is:%d\n",c);



}
