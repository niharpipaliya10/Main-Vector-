//how to take array element from user
#include<stdio.h>
void main(){

    int a[5],ele,i;
    ele=sizeof(a)/sizeof(a[0]);
    printf("number of element:%d\n",ele);
    
    for(i=0;i<ele;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<ele;i++){
        printf("%d",a[i]);
    }
}