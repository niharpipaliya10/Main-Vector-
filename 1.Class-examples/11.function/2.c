// designed a function to count how many bits are set in given int array.
#include<stdio.h>
int count_set(int);
void main()
{
int n,r;
printf("Enter a number:\n");
scanf("%d",&n);
r=count_set(n);
printf("%d",r);
}
int count_set(int n)
{
int pos,c;
   for(pos=31,c=0;pos>=0;pos--)
   {
       if(n>>pos&1)
       {
       c++;
       }
   }

return c;
}
