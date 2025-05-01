//wap to arrange array elements assending or decending order using selection short.
#include<stdio.h>
void main(){
   
   int a[5],ele,i,j,t;
   ele=sizeof(a)/sizeof(a[0]);
   printf("Enter an element of array :\n");
   for(i=0;i<ele;i++){
      scanf("%d",&a[i]);
   }
   for(i=0;i<ele;i++){
      printf(" %d",a[i]);
   }
   printf("\n");
   
   for(i=0;i<ele-1;i++){
      for(j=i+1;j<ele;j++){
              if(a[i]<a[j]){
                 
                 t=a[i];
                 a[i]=a[j];
                 a[j]=t;
              }
      }
   }
   
   
   
   
    for(i=0;i<ele;i++){
      printf(" %d",a[i]);
   }
   
   
   
   
}