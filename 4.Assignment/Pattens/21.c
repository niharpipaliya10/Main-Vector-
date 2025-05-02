/*

   PQRSTUV
    PQRST
     PQR
      P
*/
#include<stdio.h>
void main(){

int i,j,k,n,l,c,d;
char ch;
printf("Enter a row number:\n");
scanf("%d",&n);
for(i=0;i<n;i++){
 
for(j=0;j<i;j++){
 printf("  ");
}
for(k=0,ch=80;k<(n-i-1)*2-1;k++){
printf(" %c",ch+k);
}



printf("\n");
}
}
