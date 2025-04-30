//char pointer increment value increment or not
#include<stdio.h>
void main(){
   int i=258;
   char *q;

   q=(char *)&i;

   printf(" &i=%p\n",&i);
   printf("*q=%d\n",*q);
   q=q+1;    // first address increment 
   *q=*q+1; // value increment so change the value
   printf("q=%d\n",*q);
   printf("i=%d\n",i);



}
