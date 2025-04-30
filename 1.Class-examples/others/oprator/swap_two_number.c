// write a program for swap two number using temp variable

#include <stdio.h>
void main()
{

    int num, i, j;

    printf("Enter your number....\n");
    scanf("%d%d", &i, &j);
    printf("Before swap number is i=%d j=%d \n", i, j);

    num = i;
    i = j;
    j = num;
    printf("After swap number is i=%d j=%d", i, j);
}