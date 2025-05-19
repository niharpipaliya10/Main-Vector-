/*
5.
WAP in C using Recursive  function to reverse
the number of given any int number .
i/p:   n=  23456     o/p:  rev = 65432
     int   rec_fun_rev( int  );
*/
#include <stdio.h>
int rec_fun_rev(int);
void main()
{
    int num, r;
    printf("Enter a number:\n");
    scanf("%d", &num);
    r = rec_fun_rev(num);
    printf("rev=%d", r);
}
int rec_fun_rev(int num)
{
    static int rev, r;
    if (num)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
        rec_fun_rev(num);
    }
    return rev;
}
