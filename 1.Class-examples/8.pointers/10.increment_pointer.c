//increment pointer
#include<stdio.h>
void main(){

   int i=258,*p;
   char *q;

   p=&i;
   q=(char *)&i;
   printf("q=%p q+1=%p",q,q+1);
   printf("p=%p  p+1=%p",p,p+1);

}