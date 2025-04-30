// write a program to print binary of num using for loop.
#include <stdio.h>
void main()
{

    int num, pos = 31, a;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (pos; pos >= 0; pos--)
    {
        a = num >> pos & 1;
        printf("%d", a);
    }
}