/*
WAP in C using Recursive function to check
given num is prime  or not  .
i/p:   n=  17     o/p:    yes  prime
     int   rec_fun_prime ( int ,int   );

*/
#include <stdio.h>
int rec_fun_prime(int,int);
void main()
{
    int num, p,i=1;
    printf("Enter a number:\n");
    scanf("%d", &num);
    p = rec_fun_prime(num,i);
    if (p == 1)
    {
        printf("yes,it is prime number");
    }
    else
    {
        printf("no it is not a prime number");
    }
}
int rec_fun_prime(int num,int i)
{
    static int c;

    if (i <= num)
    {
        if (num % i == 0)
        {
            c++;
        }
        i++;
        rec_fun_prime(num,i);
    }
    if (c == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}