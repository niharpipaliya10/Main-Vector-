/*
12. WAP in C to check given number is positive
(+ve) negative(-ve) or zero(0) using switch case
*/
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    switch (num >> 31 & 1)
    {
    case 0:
        printf("+ve");
        break;

    case 1:
        printf("-ve");
        break;
    default:
        printf("zero");
        break;
    }
}