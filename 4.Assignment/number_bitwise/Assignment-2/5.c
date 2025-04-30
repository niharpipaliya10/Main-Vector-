/*
5.WAP in C to print sum of first n natural number

*/

#include <stdio.h>
void main()
{
    int n, sum = 0, i;
    printf("Enter a number :\n");
    scanf("%d", &n);

    for (i = 1; i <=n; i++)
    {
        sum = sum + i;
    }
    printf("sum of first n natural number is :%d", sum);
}