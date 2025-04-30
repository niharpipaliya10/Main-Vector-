// void pointer
#include<stdio.h>
void main(){
    
    char ch='a';
    int i=10;
    float f=23.5;
    void *p;
    
    p=&ch;
    printf("*p=%c\n",*(char *)p);
    
    p=&i;
    printf("*p=%d\n",*(int *)p);
    
    p=&f;
    printf("*p=%.2f\n",*(float *)p);
    
}