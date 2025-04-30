/*
8.
 1
 2 1
 3 2 1

*/
#include <stdio.h>
void main()
{
    int i, j, a = 1, k = 0, num;
    printf("Enter a row number :\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++, a = a + k)
    {
        for (j = 0; j <= i; j++, a--)
        {

            printf("%d ", a);
        }
        printf("\n");
        k++;
        a++;
    }
}