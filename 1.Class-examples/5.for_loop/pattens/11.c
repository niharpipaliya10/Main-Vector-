
/*
 *****
  ****
   ***
    **
     *
*/#include <stdio.h>
void main()
{
    int i, j, k, num;
    printf("Enter a nuber of row:\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < 5 - i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}