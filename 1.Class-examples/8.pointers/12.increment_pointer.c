//char pointer increment vlue increment or not
#include<stdio.h>
void main(){
   int i=258;
   char *q;

   q=(char *)&i;

   printf(" &i=%p\n",&i);
   printf("*q=%d\n",*q);
   
   *q=*q+1; // first value increment but after adress pointer increment so value not give incremented 
   q=q+1;
   printf("q=%d\n",*q);
   printf("i=%d\n",i);



}
