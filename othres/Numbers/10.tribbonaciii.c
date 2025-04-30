/*triboonacii*/
#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, i, sum;
    printf("%d %d ", a, b);
    for (i = 1; i < 10; i++)
    {
        sum = a + b + c;
        if (sum < 10)
            printf("%d ", sum);
        a = b;
        b = c;
        c = sum;
    }
}
