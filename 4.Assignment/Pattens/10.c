/*
        #
      A B
    # # #
   A B C D
 # # # # #
*/
#include <stdio.h>
void main()
{
    int i, j, k, num;
    char ch;
    printf("Enter a row nuber: \n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i; j++)
        {
            printf("  ");
        }
        for (k = 0, ch = 65; k <= i; k++)
        {
            if (i % 2 == 0)
            {
                printf(" #");
            }
            else
            {
                printf(" %c", ch);
                ch++;
            }
        }
        printf("\n");
    }
}