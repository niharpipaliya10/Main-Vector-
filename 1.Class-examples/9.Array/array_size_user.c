// array size take from user
#include<stdio.h>
void main(){

  int ele,i;
  printf("Enter size of array:\n");
  scanf("%d",&ele);
  int a[ele];
  printf("Enter a element of array:\n");
  for(i=0;i<ele;i++){
  scanf("%d",&a[i]);
  }
  
 for(i=0;i<ele;i++){
 printf(" %d",a[i]);

 }

}
