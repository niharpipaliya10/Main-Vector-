// Write a one line code to compare two numbers equal or not using bitwise operators.

#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter a number1:\n");
    scanf("%d", &a);
    printf("Enter a number 2:\n");
    scanf("%d", &b);
    printf("a = %d & b =%d\n", a, b);
    a ^ b ? printf("number is not equal\n") : printf("number is  equal\n");
}