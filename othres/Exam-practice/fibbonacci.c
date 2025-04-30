/*
fibbonacci..
*/
/*#include <stdio.h>
void main()
{

    int a = 0, b = 1,s,i;
    printf("%d", a);
    for (b = 1,i=1; i <= 20; i++)
    {
        s = a + b;
        printf("  %d", s);
        a = b;
        b = s;
    }
}*/

#include <stdio.h>

void main()
{
    int a = 0, b = 1, c;

    for (c = a + b; c <= 100; c = a + b)
    {
        if (c >= 50)
        {
            printf("%d ", c);
        }
        a = b;
        b = c;
    }
}
