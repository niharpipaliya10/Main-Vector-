//what is diffrence b/w int pointer and char pointer.
#include<stdio.h>
void main(){

 int i=258;
 int *p;
 char *q;

 p=&i;
 q=(char *)&i;
 printf("*p=%d *q=%d\n",*p,*q);
 *q='a';
 printf("*p=%d *q=%d\n",*p,*q);

printf("i=%d\n",i);

// Ans is int pointer point 8bit data and char pointer point 1bit data

}
