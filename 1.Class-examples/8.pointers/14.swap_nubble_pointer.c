// wap program to swap 1 nible to last nibble pointer
#include<stdio.h>
void main(){
  unsigned int num=0x12345678,t,i;
  char *q;
  printf("Before num=%x\n",num);
  
  for(i=0,q=(char *)&num;i<4;i++,*q++){
      
      *q=*q>>4|*q<<4;
      
  }
  printf("After num=%x\n",num);
}