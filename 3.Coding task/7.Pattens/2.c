/*

E
ED
EDC
EDCB
EDCBA
*/

#include<stdio.h>
void main() {


int i,j,n;
char ch;
printf("Enter a row number:\n");
scanf("%d",&n);
for(i=0;i<=n;i++){
 for(j=0,ch=64+n;j<i;j++,ch--){
    printf(" %c",ch);
 }
 printf("\n");
 
}


}