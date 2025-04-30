/*
5.
  1  2  3
  1 2
  1
  */
#include <stdio.h>
void main()
{
    int i, j, num;
    printf("Enter a row number:\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i; j++)
        {
            printf(" %d ", j + 1);
        }
        printf("\n");
    }
}