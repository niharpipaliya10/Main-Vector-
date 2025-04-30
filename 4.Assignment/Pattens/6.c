/*
* * * * * *
1 3 5 7 9
* * * *
1 3 5
* *
1
*/
#include <stdio.h>
void main()
{

    int i, j, a, num;
    printf("Enter a row number:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 0, a = 1; j <= num - i; j++, a = a + 2)
        {
            if (i % 2 == 0)
            {
                printf("* ");
            }
            else
            {

                printf("%d ", a);
            }
        }
        printf("\n");
    }
}