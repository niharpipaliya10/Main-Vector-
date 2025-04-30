// wap to find fact of the given number print as a output.
#include<stdio.h>
void main(){

 int num,i;
 printf("Enter a number :\n ");
 scanf("%d",&num);

 for(i=1;i<=num;i++){
   if(num%i==0){
   printf(" %d",i);
   }
 
 }


}
