// Write a Program in C to delete 5th bit .
//  i/p: int n= 99 o/p: 35
#include <stdio.h>
void main()
{
    int num, r1, r2;
    printf("Enter a number:");
    scanf("%d", &num);
    printf(" %d\n", num);
    r1 = num << 27;
    r1 = r1 >> 27;
    r2 = num >> 6;
    r2 = r2 << 5;
    num = r1 | r2;
    // unsigned int num = 3359131316793617, r, r1;
    // printf("num= %d", num);
    // r = num << 20;
    // r = r >> 20;
    // r1 = num >> 13;
    // r1 = r1 << 12;
    // num = r | r1;

    printf("%d", num);
}