// Write a Program in C to clear 3rd and 2nd bit .
//  i/p: int n= 63 o/p: 51

#include <stdio.h>
void main()
{

    int num;
    printf("Enter a number..\n");
    scanf("%d", &num);

    num = num & ~(1 << 3);
    num = num & ~(1 << 2);
    printf("num=%d", num);
}