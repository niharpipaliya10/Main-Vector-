/*
27. WAP in C to delete odd elements from array .
i/p: int a[6]={11,12,14,13,15,18};
o/p: int a[6]={12,14,18}
*/
#include<stdio.h>
void main(){

int a[6],i,j,c=0;
printf("Enter a ele of array:\n");
for(i=0;i<6;i++){
scanf("%d",&a[i]);
}
for(i=0;i<6;i++){
     if(a[i]%2!=0){
           c++; 
        for(j=i;j<6;j++){
	   a[j]=a[j+1];
	  
	 
	}
	i--;
        
     }
}
for(i=0;i<6-c;i++){
   printf(" %d",a[i]);

}

}
