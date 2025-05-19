/*
1.
WAP in C using Recursive  function to sum of
even digits of given any int number .
i/p:   n=  2345     o/p:  sum= 6
     int   rec_fun_sum( int  num );
*/
#include <stdio.h>
int rec_fun_sum(int);
void main()
{
    int num, sum;
    printf("Enter a number:\n");
    scanf("%d", &num);
    sum = rec_fun_sum(num);
    printf("sum = %d", sum);
}
int rec_fun_sum(int num)
{
    static int r, s = 0;
    if (num)
    {
        r = num % 10;
        if (r % 2 == 0)
        {
            s = s + r;
        }
        num = num / 10;
        rec_fun_sum(num);
    }
    return s;
}