/*
        A
       BB
      CCC
     DDDD
    EEEEE
*/
#include<stdio.h>
void main(){
int i,j,k,n;
char ch;
printf("Enter a row number:\n");
scanf("%d",&n);

for(i=0,ch=65;i<n;i++){
  for(j=0;j<n-i;j++){
  printf("  ");
  }
  for(k=0;k<=i;k++){
  printf(" %c",ch+i);
  }
printf("\n");

}




}
