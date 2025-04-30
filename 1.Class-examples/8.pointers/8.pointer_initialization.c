
//pointer initializat;ion 
#include<stdio.h>
void main(){
     int i=10;
     int *p=&i;
     const int *q=&i;
     printf("i=%d *p=%d *q=%d\n",i,*p,*q);
     
     *p=20;
    //  *q=20;
     printf("i=%d *p=%d *q=%d",i,*p,*q);
    
    
    
}