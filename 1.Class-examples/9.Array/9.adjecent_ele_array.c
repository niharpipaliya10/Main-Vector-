//wap to swap adjecent element of given int array.
#include<stdio.h>
void main() {

	int a[5],ele,i,t,j;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter an array ele:\n");
	for(i=0; i<ele; i++) {
		scanf("%d",&a[i]);
	}
	for(i=0; i<ele; i++) {
		printf(" %d",a[i]);
	}
	printf("\n*******************************\n");

// 	for(i=0,j=1;i<ele; j+=2,i+=2) {
// 		t=a[i];
// 		a[i]=a[j];
// 		a[j]=t;
// 	}

for(i=0;i<ele-1;i+=2){
   t=a[i];
   a[i]=a[i+1];
   a[i+1]=t;
}


// 	printf("*******************************\n");

	for(i=0; i<ele; i++) {
		printf(" %d",a[i]);
	}
}