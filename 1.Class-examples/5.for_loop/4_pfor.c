// wap to print digit is more than 5.
#include<stdio.h>
void main(){

 int num,r;
 printf("Enter a number :\n");
 scanf("%d",&num);

 for(;num;num=num/10){
 
    r=num%10;
    if(r>=5){
    
    printf(" %d\n",r);
    }
 
 }




}
