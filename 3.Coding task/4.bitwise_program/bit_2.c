// 2. Write a Program in C to set 0th and 5th bit .
//  i/p: int n= 128 o/p: 161

#include <stdio.h>
void main()
{
    int num;
    printf("Enter your number...\n");
    scanf("%d", &num);

    num = num | 1 << 0;
    num = num | 1 << 5;

    printf("num =%d\n", num);
}
