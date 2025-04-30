/*
13579
 3579
  579
   79
    9
*/

#include <stdio.h>
void main()
{
    int i, j, k, a = 1, num;
    printf("Enter a row number :\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++, a = a + 2)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < num - i; k++)
        {
            printf("%d", a + k * 2);
        }
        printf("\n");
    }
}