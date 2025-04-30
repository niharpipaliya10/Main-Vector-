/*
16.  Reverse number .
i/p1:    963         o/p1: 369
i/p2:    2786        o/p2:  6872
*/
#include <stdio.h>
void main()
{
    int num, r, temp, rev = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    printf("Reverse number : ");
    while (temp)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }
    printf("%d", rev);
}