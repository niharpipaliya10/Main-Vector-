//wap in c to print binary of given number inb reverce order.

#include<stdio.h>
void main(){

	int num,pos,m;
	printf("Enter a number is : ");
	scanf("%d",&num);
	printf("given number binary is:\n");
	for(pos=31;pos>=0;pos--){

		m = num>>pos&1;
		printf("%d",m);

	}



      int n,i,j;
      for(i=0,j=31;i<j;i++,j--){
      
        m=num>>i&1;
	n=num>>j&1;

	if(m!=n){
          num =num^1<<i;
	  num =num^1<<j;

	}


      
      }

    printf("aftern reverce binary is: \n");

     for(pos=31;pos>=0;pos--){
       
       m=num>>pos&1;
       printf("%d",m);
     
     }
}
