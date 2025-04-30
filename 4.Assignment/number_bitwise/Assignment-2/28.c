/*
28.WAP in C to print multiplication table from 2 to 9
*/
#include <stdio.h>
void main()
{

    int i, num, a;
    // printf("Enter a number:\n");
    // scanf("%d", &num);
    for (num = 2; num <= 9; num++)
    {
        for (i = 1; i <= 10; i++)
        {
            a = num * i;
            printf("%d * %d = %d\n", num, i, a);
        }
        printf("\n*************\n");
    }
}