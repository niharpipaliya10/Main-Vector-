// count digit in num.
#include<stdio.h>
void main(){
 int num,r,c=0;
 printf("Entyer a number:\n");
 scanf("%d",&num);

 while(num){
  c++;
  num=num/10;
 }
 printf("count of digit is:%d\n",c);
}
