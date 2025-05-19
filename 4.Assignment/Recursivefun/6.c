/*
6.
WAP in C using Recursive  function to check
given num is perfect or not  .
i/p:   n=  6     o/p:    yes  perfect
     int   rec_fun_perfect( int   );
*/
#include <stdio.h>
int rec_fun_perfect(int);
void main()
{
    int num, p;
    printf("Enter a number:\n");
    scanf("%d", &num);
    p = rec_fun_perfect(num);
    if (p == 1)
    {
        printf("yes num is perfect.");
    }
    else
    {
        printf("no num is not perfect");
    }
}
int rec_fun_perfect(int num)
{

    static int i = 1,sum;
    if (i < num)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
        i++;
        rec_fun_perfect(num);
    }
    if (num == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}