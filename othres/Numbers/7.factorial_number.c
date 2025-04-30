/*print to factorial of given number*/
#include <stdio.h>
void main()
{
    int num, i, mul = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        mul = mul * i;
    }
    printf("%d", mul);
}