/*
WAP in C using Recursive  function to count
digit less than 6  of given any int number .
i/p:   n=  2658942     o/p:  count= 4
     int   rec_fun_count( int  num );

*/
#include <stdio.h>
int rec_fun_count(int);
void main()
{
    int num, c;
    printf("Enter a number:\n");
    scanf("%d", &num);
    c = rec_fun_count(num);
    printf("count = %d", c);
}
int rec_fun_count(int num)
{
    static int count, r;

    if (num)
    {
        r = num % 10;
        if (r < 6)
        {
            count++;
        }
        num = num / 10;
        rec_fun_count(num);
    }
    return count;
}