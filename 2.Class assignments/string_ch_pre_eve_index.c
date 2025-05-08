//wap to print char from string which are present on prime number index.
#include<stdio.h>
void main(){

	int i,j,c;
	char s[20];
	printf("Enter a string :\n");
	scanf("%s",s);

	for(i=0;s[i];i++)
	{
		for(j=1,c=0;j<=i;j++){

			if(i%j==0){
				c++;
			}
			}
			if(c==2){
			printf(" %d",i);
			}
		
		
	}



}
