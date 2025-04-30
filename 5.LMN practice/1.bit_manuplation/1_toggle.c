#include<stdio.h>
void main(){

int num,pos;
printf("Enter your number:\n");
scanf("%d",&num);
printf("Enter a position :\n");
scanf("%d",&pos);


num =num^1<<pos;

printf("after toggle number is %d :\n",num);





}
