#include<stdio.h>
void main(){

 int i=20,j=10;
 int *p;

 p=&i;
 printf("i=%d *p=%d\n",i,*p);
 *p=100;
 printf("i=%d *p=%d\n",i,*p);
 p=&j;
 printf("j=%d *p=%d\n",j,*p);
*p=200;
 printf("j=%d *p=%d\n",j,*p);





}
