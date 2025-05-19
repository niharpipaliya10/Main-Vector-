/*
Wap to designed recursion function factorial.
*/
#include <stdio.h>
int fact(int);
void main()
{
    int num, r;
    printf("Enter a number:\n");
    scanf("%d", &num);
    r = fact(num);
    printf("factorial = %d\n", r);
}
/*int fact(int num)
{
    static int f = 1;
    if (num)
    {
        f = f * num;
        num--;
        fact(num);
    }

    return f;
}*/
int fact(int num)
{
    if (num)
    {
        return num * fact(num - 1);
    }
    else
    {
        return 1;
    }
}