/* 17. Count set bit in num.*/
#include <stdio.h>
void main()
{
    int num, pos, m, c = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);

    for (pos = 31; pos >= 0; pos--)
    {
        m = num >> pos & 1;
        if (m)
        {
            c++;
        }
    }
    printf("given number set bit is:%d", c);
}