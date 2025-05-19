/*
WAP in C using Recursive  function to sum of
last 3 digits of given any int number .
i/p:   n=  23456     o/p:  sum= 15
int   rec_fun_sum( int  num , int c );

*/
#include <stdio.h>
int rec_fun_sum(int, int);
void main()
{
    int num, c = 3, s, temp;
    printf("Enter a number:\n");
    scanf("%d", &num);

    s = rec_fun_sum(num, c);
    printf("sum =%d\n", s);
}
int rec_fun_sum(int num, int c)
{
    static int a, r, sum;
    if (num == 0 || c == 0)
    {
        return 0;
    }
    else if (num)
    {
        r = num % 10;
        if (a < c)
        {
            a++;
            sum = sum + r;
        }
        num = num / 10;
        rec_fun_sum(num, c);
    }
   
    return sum;
}