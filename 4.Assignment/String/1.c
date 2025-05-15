/*
1. WAP in C to scan and print string with space. 
     i/p:     vector india coding  sirji  , char s[30]; 
      o/p:    vector india coding  sirji

*/
#include<stdio.h>
void main()
{
    char s[30];
    printf("Enter a string:\n");
    scanf("%[^\n]s",s);
    printf("%s",s);
}