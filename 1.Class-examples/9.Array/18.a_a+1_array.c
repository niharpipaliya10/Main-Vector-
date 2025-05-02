//a+1 is incement address of array array element and &a+1 increment the address point to change
#include<stdio.h>
void main(){
int a[5]={10,20,30,40,50},i;
printf("a=%u &a=%u\n",a,&a);
printf("a+1=%u &a+1=%u\n",a+1,&a+1);
}