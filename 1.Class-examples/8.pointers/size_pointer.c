// what is size of pointers
#include<stdio.h>
void main(){
 
 char ch,*cp;
 int  i,*ip;
 float f,*fp;
 double d,*dp;

 printf("%ld %ld\n",sizeof(ch),sizeof(cp));
 printf("%ld %ld\n",sizeof(i),sizeof(ip));
 printf("%ld %ld\n",sizeof(f),sizeof(fp));
 printf("%ld %ld\n",sizeof(d),sizeof(dp));




}
