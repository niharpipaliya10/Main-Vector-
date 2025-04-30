#include<stdio.h>
void main(){

char ch;
printf("Enter char :\n");
scanf("%c",&ch);

ch>='a'&&ch<='z'?printf("ch is lowe"):(ch>='0'&&ch<='9'?printf("digit"):ch>='A'&&ch<='Z'?printf("ch is upper"):printf("ch is special"));
}
