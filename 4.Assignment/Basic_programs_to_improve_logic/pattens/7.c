/*
7.
    3 2 1
    2 1
    1
*/
#include <stdio.h>
void main()
{
    int i, j, a = 3;
    for (i = 0; i < 3; i++, a = a + 2)
    {
        // for (j = 0; j <3-i; j++,a--)
        // {
        //     printf("%d",a);
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j+i);
        }
    
    printf("\n");}
}
