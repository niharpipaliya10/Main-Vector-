/*
4321
ABC
21
A
*/
#include<stdio.h>
void main(){

  int i,j,a,n;
  char ch=65;
  printf("Enter a row number:\n");
  scanf("%d",&n);
  for(i=0,a=n;i<n;i++,a=a+j-1){
   for(j=0,ch=65;j<n-i;j++,a--,ch++){
     
     if(i%2!=0){
     printf("%c",ch);
     }else{
     printf("%d",a);
     
     }
   }
  
printf("\n");  
  }





}
