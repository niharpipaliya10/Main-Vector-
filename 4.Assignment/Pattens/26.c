/*

   1
  232
 34543
4567654
*/
#include<stdio.h>
void main(){

int i,j,k,b,a,n,l,c,d;
printf("Enter a row number:\n");
scanf("%d",&n);
for(i=0,a=1,c=0;i<n;i++,a++,c=c+2){
  b=a;
  d=c;
for(j=0;j<n-i;j++){
 printf("  ");
}
for(k=0;k<=i;k++,b++){
printf(" %d",b);
}
for(l=1;l<=i;l++,d--){
printf(" %d",d);
}


printf("\n");
}
}
