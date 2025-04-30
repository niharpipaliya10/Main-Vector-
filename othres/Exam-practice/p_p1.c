/*
 E  *  *  *  *
    D  *  *  *
       C  *  *
          B  *
             A
*/
#include <stdio.h>
void main()
{
    int i, j, k,num;
    char ch;
    printf("Enter a row number:\n");
    scanf("%d",&num);
    for (i = 0, ch = 64 + num; i <= num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (k = 0; k < num - i; k++)
        {
            if (k == 0)
            {
                printf("%c", ch);
                ch--;
            }
            else
            {
                printf(" *");
            }
        }
        printf("\n");
    }
}
