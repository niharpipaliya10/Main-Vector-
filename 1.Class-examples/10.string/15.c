/*
diffrent b/w charactor pointer intilization and char pointer intilization.
*/
#include <stdio.h>
void main()
{
    char s[] = "abcd";
    
    // printf("%s",s);o/p is abcd
    // printf("%s",s+1);//o/p is bcd so s is base adress of string.
    // printf("%c", *(s + 2)); /* pointer throw character print.*/
    // printf("%c", s[2]);
    // s= "mnop";//invalid
    // s++;//invalid
    // s[1]='B';//valid
    // printf("%s", s);
    char *p = "abcd";
    // printf("%s",p);
    // printf("%s", p+2);
    //  printf("%c",*(p+2));
    //  printf("%c",p[2]);
    p = "niop";
    //  printf("%s",p);//valid
    //  p++;//valid
    //  p=p+2;//valis
    // s = p;//invliad
    p=s;//valid
    p[1]='b';

    printf("%s", p);
}