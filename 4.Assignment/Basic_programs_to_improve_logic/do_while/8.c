//count even digit more than 4.
#include<stdio.h>
void main(){

int num,r,c=0;
printf("Enter a number ;\n");
scanf("%d",&num);
do{
r=num%10;
if(r%2==0&&r>=4)
     c++;
num=num/10;
}while(num);
printf("count of even  digit more than 4 in num is:%d\n",c);



}
