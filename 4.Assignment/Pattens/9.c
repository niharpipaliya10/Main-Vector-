/*
        E
      1 2
    C D E
  1 2 3 4
A B C D E

*/
#include <stdio.h>
void main()
{
    int i, j, k, num;
    char ch;
    printf("Enter a row number:\n");
    scanf("%d", &num);

    for (i = 0, ch = 64 + num; i < num; i++, ch = ch - 2)
    {
        for (k = 0; k < num - i; k++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {

            if (i % 2 == 0)
            {
                printf("%c ", ch + j);
            }
            else
            {
                printf("%d ", j + 1);
            }
        }
        printf("\n");
        ch++;
    }
}