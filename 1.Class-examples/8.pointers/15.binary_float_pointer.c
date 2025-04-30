// wap a program print float binary using pointer.
#include <stdio.h>
void main()
{
    float f = 23.5;
    char *p;
    for ((p = char *)&f, p = p + 3; p >= &f; p--)
    {
        for (pos = 7; pos >= 0; pos--)
        {
            printf("%d", *p >> pos & 1);
        }
    }
    printf("\n");
}
