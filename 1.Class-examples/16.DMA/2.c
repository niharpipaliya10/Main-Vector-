/*

wapto allocate dma store 5 int store tha data and print the data 
*/
#include<stdio.h>
#include<stdlib.h>
void main(){
    int *p,i;
    p=malloc(sizeof(int)*5);
    printf("Enter a 5 int value:\n");
    for(i=0;i<5;i++){
        scanf("%d",&p[i]);
    }
     for(i=0;i<5;i++){
        printf(" %d",p[i]);
    }
    printf("\n");
}