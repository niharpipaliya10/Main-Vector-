/*
24. WAP in C to delete 0th index element from array
i/p: int a[5]={99,88,77,66,55}, in=0;
o/p: int a[5]={88,77,66,55};
*/
#include<stdio.h>
void main(){

int a[5],i;
printf("Enter ele of array:\n");
for(i=0;i<6;i++){
scanf("%d",&a[i]);

}
for(i=0;i<5;i++){
printf(" %d",a[i]);
}
for(i=0;i<5;i++){

     a[i]=a[i+1];
}
printf("\n");
for(i=0;i<4;i++){
printf(" %d",a[i]);
}





}
