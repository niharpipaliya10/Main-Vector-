/*
3.
WAP in C using Recursive  function to product
of digit factor of 3  given any int number .
i/p:   n=  345638     o/p:  product= 54
int   rec_fun_product( int  num );
*/
#include <stdio.h>
int rec_fun_product(int);
void main()
{
    int num, c;
    printf("Enter a number:\n");
    scanf("%d", &num);
    c = rec_fun_product(num);
    printf("product = %d \n", c);
}
int rec_fun_product(int num)
{
    static int mul = 1, r = 0;
    if (num)
    {
        r = num % 10;
        if (r % 3 == 0)
        {
            mul = mul * r;
        }
        num = num / 10;
        rec_fun_product(num);
    }
    return mul;
}