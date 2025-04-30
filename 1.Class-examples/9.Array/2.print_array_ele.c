//printf array elements &reverse both
#include<stdio.h>
void main(){

     int  i,ele;
    int  a[5]={10,20,30,40,50};
     ele=sizeof(a)/sizeof(a[0]);
     printf("number of ele :%d\n",ele);
     
     for(i=0;i<ele;i++){
         printf(" %d",a[i]);
     }
     printf("\n");
     
     for(i=ele-1;i>=0;i--){
     printf(" %d",a[i]);
         
     
     }
    
}