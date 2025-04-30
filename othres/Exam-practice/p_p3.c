/*
               a
             a a
           a 1 a
         a 2 1 a
       a 3 2 1 a
     a a a a a a

*/
#include <stdio.h>
void main()
{
    int i, j, k, num;
    printf("Enter a row number:\n");
    scanf("%d",&num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j < num+ 1- i; j++)
        {
            printf("  ");
        }
        for (k = i; k >= 1; k--)
        {

            if (k == 1 || i == num || k == i)
            {
                printf(" a");
            }
            else
            {

                printf(" %d", k - 1);
            }
        }
        printf("\n");
    }
}