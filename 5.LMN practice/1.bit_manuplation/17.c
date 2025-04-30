// count set bit of given numnber.
#include<stdio.h>
void main(){

   int num,pos,m,c=0;
   printf("Enter a number:");
   scanf("%d",&num);

   for(pos=31;pos>=0;pos--){
   
     m=num>>pos&1;
     if(m){
     c++;
     }
   }
   printf("%d\n",c);

}
