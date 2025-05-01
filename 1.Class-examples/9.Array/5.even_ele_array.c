//wap to print even element og given int array
#include<stdio.h>
void main(){

 int a[5],ele,i;
 ele=sizeof(a)/sizeof(a[0]);
 printf("Enter of array ele:\n");

 for(i=0;i<ele;i++){
   scanf("%d",&a[i]);
 }

 for(i=0;i<ele;i++){
    if(a[i]%2==0){
    printf(" %d",a[i]);
    }
 }



}
