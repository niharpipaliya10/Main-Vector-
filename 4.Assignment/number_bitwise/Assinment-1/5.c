/*
5. WAP to rotate the bits of given short int num.
Ex.  i/p  num is  31  , rotate bit is  3
It’s binary     :   0000 0000 0001 1111
After rotate   :   1110 0000 0000 0011
*/

#include <stdio.h>
void main()
{
    unsigned int num, m, n, i, j;
    int pos = 15;
    printf("Enter a number :\n");
    scanf("%d", &num);
    printf("before swaping nibble:\n");
    for (pos = 15; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
    num = num >> 3 | num << (15 - 3);
   
    printf("\nAfter swaping nibble:\n");
    for (pos = 15; pos >= 0; pos--)
    {
        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
}