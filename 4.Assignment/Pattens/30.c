/*
         A
        A B
       A B C
      A B C D
     A B C D E
      A B C D
       A B C 
        A B
	 A
 
*/
#include<stdio.h>
void main(){

	int i ,j,k,l,n;
	printf("Enter a row number :\n ");
	scanf("%d",&n);
	char ch,c;
	for(i=0;i<n;i++){

		for(j=1;j<n-i;j++){
			printf("  ");

		}
		for(k=0,ch=65;k<=i;k++,ch++){

			printf("   %c",ch);

		}


		printf("\n");

	}
	for(i=0;i<=n;i++){
	        for(j=0;j<=i;j++){
		printf("  ");
		}
		for(l=1,c=65;l<n-i;l++,c++){
			printf("   %c",c);
                                  
		}
		printf("\n");
	}
}
