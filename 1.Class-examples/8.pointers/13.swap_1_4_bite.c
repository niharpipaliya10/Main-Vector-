//wap to swap 1 bite and 4bite of given int
#include<stdio.h>
void main(){

  unsigned int num=0x11223344,t;
  char *q,*p;
  p=(char *)&num;
  q=p+3;
  printf("Before num=%x\n",num);
  t=*q;
  *q=*p;
  *p=t;
  printf("After num=%x\n",num);

}
