// how to scan string and printf.
#include<stdio.h>
void main(){

  char s[10];
  printf("Enter a string:\n");
  scanf("%[^\n]",s);
  printf("%s",s);


}