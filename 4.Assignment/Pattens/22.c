/*
*****
4321
***
21
*
*/
#include<stdio.h>
void main(){

  int i,j,a,n;
  
  printf("Enter a row number:\n");
  scanf("%d",&n);
  for(i=0,a=n;i<n;i++,a=a+j-1){
   for(j=0;j<n-i;j++,a--){
     
     if(i%2==0){
     printf(" *");
     }else{
     printf(" %d",a);
     
     }
   }
  
printf("\n");  
  }





}
