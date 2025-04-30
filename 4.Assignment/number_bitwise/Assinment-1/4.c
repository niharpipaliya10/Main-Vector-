/*
4. WAP to find num is divisble by 8 or not .
 using bitwise operator and ternary operator
Ex1.      i/p  40    o/p   :   yes
Ex2.      i/p  62    o/p   :    no
*/

#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    num = num & 7;
    num == 0 ? printf("yes") : printf("no");
}