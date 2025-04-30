/*16.  Print given series  .
       2   9   28   65   126   217*/

#include <stdio.h>
void main()
{
    int i,a;
    for (i = 1; i <= 6; i++)
    {
        a = i * i * i + 1;
        printf("%d ", a);
    }
}