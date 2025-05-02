/*
FEDCBA
ESCBA
DCBA
CBA
BA
A
*/
#include<stdio.h>
void main(){
 
 int i,j,n;
 char ch;
 printf("Enter a row number:\n");
 scanf("%d",&n);
 for(i=0,ch=64+n;i<n;i++,ch=ch+j-1){
   for(j=0;j<n-i;j++,ch--){
   printf("%c",ch);
   }
 printf("\n");
 
 }




}
