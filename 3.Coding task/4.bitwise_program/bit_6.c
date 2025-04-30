// Write a Program in C to delete 0th, 1st , 2nd bit .
//  i/p: int n= 511 o/p: 63

#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    // num = num >> 0;
    // num = num >> 1;
    // num =num>>2;
    num = num >> 3;
    printf("num =%d", num);
}