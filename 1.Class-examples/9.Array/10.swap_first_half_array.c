//wap to swap first half of the array with second half.
//wap to swap first half of the array with second half.
#include<stdio.h>
void main(){
   int a[5],ele,i,t,j;
   ele=sizeof(a)/sizeof(a[0]);
   printf("Enter a ele of array:\n");
   for(i=0;i<ele;i++){
      scanf("%d",&a[i]);
   }
   for(i=0;i<ele;i++){
      printf("%d",a[i]);
   }
   printf("\nAfter swap:\n");
   if(ele%2==0){
   for(i=0,j=ele/2;j<ele;i++,j++){
      t=a[i];
      a[i]=a[j];
      a[j]=t;
   }
   }else{
      for(i=0,j=(ele/2)+1;j<ele;i++,j++){
      t=a[i];
      a[i]=a[j];
      a[j]=t;
   } 
   }
   
    for(i=0;i<ele;i++){
      printf("%d",a[i]);
   }
   
   
   
}