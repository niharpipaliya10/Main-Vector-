#include<stdio.h>
void main(){
int i,j,k;
printf("Enter your first number:\n");
scanf("%d",&i);
printf("Enter your second number:\n");
scanf("%d",&j);
printf("Enter your third number:\n");
scanf("%d",&k);
printf("your 3 number is %d %d %d\n",i,j,k);

i>j?j>k?printf("%d",i):printf("%d",k):k>j?printf("%d",k):printf("%d",j);
}
