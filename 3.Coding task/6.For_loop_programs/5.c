// WAp in c to print even number( using bitwise operator) 299 to 275.

#include<stdio.h>
void main(){

	int i,pos,m;
	for(i=299;i>274;i--){

		m=i&1;
		if(m==0){
			printf("%d ",i);

		}


	}

}
