/*wap a number is perfect or not.*/
#include <stdio.h>
void main()
{
    int num, i,sum;
    printf("Enter a number:\n");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (num == sum)
    {
        printf("number is perfect.");
    }
    else
    {
        printf("number is not perfect.");
    }
}