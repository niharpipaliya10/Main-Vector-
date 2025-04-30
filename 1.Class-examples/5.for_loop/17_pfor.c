//wap in c get rotation of bits for given number..

#include<stdio.h>
void main(){

   unsigned int num,m;
   int pos;
	printf("Enter a number is : ");
	scanf("%d",&num);
	printf("given number binary is:\n");
	for(pos=31;pos>=0;pos--){

		m = num>>pos&1;
		printf("%d",m);

	}



      int i;
      for(i=0;i<4;i++){
      
        m=num&1;
        num=num>>1;	
       
	if(m){
          num = num|1<<31;

	}


      
      }

    printf("aftern reverce binary is: \n");

     for(pos=31;pos>=0;pos--){
       
       m=num>>pos&1;
       printf("%d",m);
     
     }
}
