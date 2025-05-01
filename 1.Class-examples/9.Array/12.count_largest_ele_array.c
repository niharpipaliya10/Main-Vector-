//wap to count the how many largest number in given array.

#include<stdio.h>
void main(){
   int a[5],i,L,ele,c=0;
   ele=sizeof(a)/sizeof(a[0]);
   printf("Enter elements of array:\n");
   for(i=0;i<ele;i++){
      scanf("%d",&a[i]);
   }
   L=a[0];
   c=0;
   for(i=1;i<ele;i++){
      if(a[i]>a[0]){
         L=a[i];
      }
      
   }
   printf(" largest ele of array is :%d\n",L);
   for(i=0;i<ele;i++){
      if(a[i]==L){
         c++;
      }
   }
   printf(" largest ele of array count is :%d",c);
   
}