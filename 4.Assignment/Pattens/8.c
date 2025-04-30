/*
5
* *
5 4 3
* * * *
5 4 3 2 1
*/
#include <stdio.h>
void main()
{
    int i, j, a, num;
    printf("Enter a row number:\n");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        for (j = 0, a = num; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("*");
            }
            else
            {
                printf("%d", a);
                a--;
            }
        }
        printf("\n");
    }
}
