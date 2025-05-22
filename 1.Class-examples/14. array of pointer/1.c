/*
example-1
*/
#include<stdio.h>
void main(){
    int i=10,j=20,k=30;
    int *p[3]={&i,&j,&k};
    printf("%d %d %d\n",*p[0],*p[1],*p[2]);
    printf("%ld %ld %ld",p[0][0],p[1][0],p[2][0]);
}