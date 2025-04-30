/*
     A
    123
   ABCDE
1234567

*/

#include <stdio.h>
void main()
{
    int i, j, k, num, ch;
    printf("Enter a nuber of row:\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - 1 - i; j++)
        {
            printf(" ");
        }
        for (k = 0, ch = 65; k <= i; k++, ch++)
        {
            if (i % 2 == 0)
            {
                printf("%c", ch);
            }
            else
            {
                printf("%d", j + 1);
            }
        }
        printf("\n");
    }
}