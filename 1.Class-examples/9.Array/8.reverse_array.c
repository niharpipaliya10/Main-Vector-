//wap ro reverce contentesd ogf int array.
#include<stdio.h>
void main() {

	int a[5],ele,i,j,t;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Engter an array elements:\n");
	for(i=0; i<ele; i++) {
		scanf("%d",&a[i]);
	}
	for(i=0; i<ele; i++) {
		printf("[%d]",a[i]);
	}


	// for(i=ele-1;i>=0;i--){
	//    printf(" %d",a[i]);
	// }

	for(i=0,j=ele-1; i<j; i++,j--) {
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	printf("\nAfter\n");
	for(i=0; i<ele; i++) {
		printf("[%d]",a[i]);
	}

}