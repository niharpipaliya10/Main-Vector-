#include <stdio.h>
void main()
{
    int num, pos = 31;
    printf("Enter a number :\n");
    scanf("%d", &num);
l:
    if (pos % 8 == 0)
    {
        printf(" ");
    }
    printf("%d", num >> pos & 1);
    pos--;

    if (pos >= 0)
    {
        goto l;
    }
}