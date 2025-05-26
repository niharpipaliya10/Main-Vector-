/*
16. WAP in C to swap(using bitwise) 0th ele with
last ele in array using 2 pointer without any loop.
i/p: int a[6]={111,222,333,444,555,666}, *p,*q ;
o/p: 666 222 333 444 555 111
*/
#include<stdio.h>
void main()
{
 
 int a[6],i;
 printf("enter a array ele:\n");
  for(i=0;i<6;i++){
  scanf("%d",&a[i]);
  }
printf("before:\n");
    for(i=0;i<6;i++)
    {
    printf(" %d",a[i]);
    }
    a[0]=a[0]^a[5];
    a[5]=a[0]^a[5];
    a[0]=a[0]^a[5];
  
   printf("\nAfter\n");
   for(i=0;i<6;i++)
    {
    printf(" %d",a[i]);
    }
    

/*
int num1=50,num2=10;
printf("%d %d",num1,num2);

num1=num1^num2;
num2=num1^num2;
num1=num1^num2;

printf("\nnum1=%d,num2=%d",num1,num2);
*/
}