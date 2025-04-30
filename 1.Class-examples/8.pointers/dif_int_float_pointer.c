// what is difference b/w int pointer and float	pointer.
#include<stdio.h>
void main(){

  float f=23.5;
  int *p;
  float *fp;

  fp=&f;
  p=(int *)&f;
  printf("*fp=%f\n",*fp);
  printf("*p=%d\n",*p);


//float pointer print float value or int pointer print binary of decimal  


}
