//wap to9+prove that within array all the element are adjcent location.
#include<stdio.h>
void main(){
  int a[5]={10,20,30,40,50},i=200;
  printf(" i=%d a[-1]=%d\n",i,a[-1]);
  i=500;
  printf(" i=%d a[-1]=%d\n",i,a[-1]);// that prove two element is not adjcent
  for(i=0;i<5;i++){
    // printf("%u %d\n",&a[i],a[i]);// that prove array two element are adjcent 
  }
  printf("&i=%u i=%d",&i,i);

}