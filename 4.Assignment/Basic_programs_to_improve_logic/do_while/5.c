//sum of digit in b/w 3 to8.
#include<stdio.h>
void main(){

int num,r,sum=0;
printf("Enter a number ;\n");
scanf("%d",&num);
do{
r=num%10;
if(r>=3&&r<8)
 sum=sum+r;
num=num/10;
}while(num);
printf("sum of digit in b/w 3 to 8 is:%d\n",sum);



}
