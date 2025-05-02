/*
1  2  4  7  11 16
1  2  4  7  11
1  2  4  7
1  2  4  
1  2  
1
*/

#include<stdio.h>
void main(){
    int i,j,a,n;
    printf("Enter a row nuber:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0,a=0;j<n-i;j++){
            if(j<2){
            printf(" %d",j+1);}
            else{
            printf(" %d",j*2+a);
            a=a+j-1;}
        }
        printf("\n");
    }

}