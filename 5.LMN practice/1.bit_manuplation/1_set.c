#include<stdio.h>
void main(){

int num,pos;
printf("Enter a number: ");
scanf("%d",&num);
printf("Enter a position of bit do id set:");
scanf("%d",&pos);

num =num|1<<pos;

printf("After set a bit number is :%d\n",num);





}
