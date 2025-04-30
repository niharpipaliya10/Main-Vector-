/*
 2.
                         *  *  *   
                         *  * 
                         *
*/
#include <stdio.h>
void main()
{
    int i, j,num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for (i = 1; i <=num; i++)
    {
        for (j = 1; j <=num+1-i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}