/*
1. WAP in C to print binary of integer number using
for loop , while loop and goto .
*/
#include <stdio.h>
void main()
{
    int num, pos;
    printf("Enter a your number:\n");
    scanf("%d", &num);
    for (pos = 31; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 8 == 0)
        {
            printf(" ");
        }
    }
}