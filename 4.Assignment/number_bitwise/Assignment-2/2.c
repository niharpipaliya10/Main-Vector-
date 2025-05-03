/*
WAP in C to count even digits using do-while loop.

*/
#include <stdio.h>
void main()
{
    int num, r, rev = 0,c=0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    do
    {
        r = num % 10;
        if (r % 2 == 0)
            c++;
        num = num / 10;
    } while (num);
    printf("%d", c);
}