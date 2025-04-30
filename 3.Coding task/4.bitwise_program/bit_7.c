// Write a Program in C to delete 2nd bit .
//  i/p: int n= 39 o/p: 19
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    num = num >> 1;
    printf("num=%d", num);
}