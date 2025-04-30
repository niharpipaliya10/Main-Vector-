// print binary of ch.
#include<stdio.h>
void main(){

 char ch,pos;
 printf("Enter a charactor:\n");
 scanf("%c",&ch);

 for(pos=8;pos>=0;pos--){
 printf("%d",ch>>pos&1);
 }
 


}
