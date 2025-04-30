#include<stdio.h>
void main(){
    
    int num,r1,r2,r3,r4,r5;
    printf("Enter a number: ");
    scanf("%d",&num);
    r1=num%10;
    num=num/10;
    r2=num%10;
    num =num/10;
    num= num*10+r1;
    num=num*10+r2;

    
    

    printf("The number is: %d",num);
}