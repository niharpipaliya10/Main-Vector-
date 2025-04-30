// Write a Program in C to delete 0th bit .
//  i/p: int n= 170 o/p: 85
#include <stdio.h>
void main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    num = num >> 1;
    printf("%d", num);
}