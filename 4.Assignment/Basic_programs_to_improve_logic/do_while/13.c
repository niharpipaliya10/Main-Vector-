//sum of last 3 odd digit.
#include<stdio.h>
void main(){

int num,r,c=0,sum=0;
printf("Enter a number ;\n");
scanf("%d",&num);
do{
r=num%10;
if(r%2!=0){
sum=sum+r;
c++;
}
num=num/10;

}while(c<3);
printf("sum of last 3 odd digit  in num is:%d\n",sum);



}
