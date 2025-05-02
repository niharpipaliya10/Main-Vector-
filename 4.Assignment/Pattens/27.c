/*

      A
     CBA
    EDCBA
   GFEDCBA
  IHGFEDCBA
*/
#include<stdio.h>
void main(){
int i,j,k,a,n;
char ch;
printf("Emtyer a row number:\n ");
scanf("%d",&n);

for(i=0,ch=65;i<n;i++,ch=ch+k+2){
 for(j=0;j<n-i;j++){
 printf("  ");
 }
 for(k=0;k<=i*2;k++,ch--){
   printf(" %c",ch);
 
 }
 printf("\n");



}





}
