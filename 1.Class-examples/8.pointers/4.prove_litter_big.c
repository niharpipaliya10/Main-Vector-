// prove that we working with littele endian hardware.
#include<stdio.h>
void main(){

  int i=10;
  char *cp;
  cp=(char *)&i;

if(*cp==i)
  printf("littel endian\n");
else
 printf("big endian");

}
