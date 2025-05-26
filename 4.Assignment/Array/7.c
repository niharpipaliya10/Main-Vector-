/*
WAP in C to print binary of all elemets in array .
       i/p: int a[5]={10,100,1000,100,10}
*/
#include <stdio.h>
void main()
{
    int a[5] , i, pos;
    printf("Enter ele of array:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        // printf(" %d",a[i]);
        for (pos = 31; pos >= 0; pos--)
        {
            printf("%d", a[i] >> pos & 1);
            if(pos%8==0){
                printf(" ");
            }
        }
        printf("\n");
    }
}