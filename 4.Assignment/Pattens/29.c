/*
29]
           *
          ***   
         *****
        *******

*/
#include<stdio.h>
void main(){
    int i,j,n,k;
    printf("Enter a row number:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(k=0;k<n-i;k++){
            printf("  ");
        }
        for(j=0;j<=i*2;j++){
            printf(" *");
        }
        printf("\n");
    }
}