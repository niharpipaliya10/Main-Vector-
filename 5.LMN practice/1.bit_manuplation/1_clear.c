#include<stdio.h>
void main(){

int num,pos;
printf("Enter your number:\n");
scanf("%d",&num);
printf("enter position to make clear :\n");
scanf("%d",&pos);

num= num&~(1<<pos);

printf("After  clear bit num is %d",num);

}
