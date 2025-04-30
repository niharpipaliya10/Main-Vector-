//increment & decrement pointer
#include<stdio.h>
void main(){

   int i=10,j;
   int *p=&i;
   printf("&i=%p , p=%p\n",&i,p);
//   j=++*p;// value increment address same
    // j=*++p;// unspecified ans
    // j=*p++;//adress change but value same
    // j=++(*p);// same as first
    j=(*p)++;// same as third
    
    printf("&i=%p , p=%p ,i=%d\n",&i,p,*p);



}