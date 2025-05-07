/*
22.WAP in C to merge 2 array into 3rd array .
i/p: int a[3]={1,5,7}; b[3]={11,22,33};
o/p: int c[6]={1,11,5,22,7,33}

*/
#include<stdio.h>
void main(){

int a[3],b[3],i,c[6];
printf("enter a array ele:\n");
for(i=0;i<3;i++){
scanf("%d %d",&a[i],&b[i]);
}


  for(i=0;i<3;i++){
  printf(" %d",a[i]);
  }
printf("\n");
  for(i=0;i<3;i++){
  printf(" %d",b[i]);
  }
  printf("\n");
  for(i=0;i<6;i++){
        c[i]=a[i];
  }
printf("\n");
  for(i=0;i<6;i++){
  printf(" %d",c[i]);
  }



}
