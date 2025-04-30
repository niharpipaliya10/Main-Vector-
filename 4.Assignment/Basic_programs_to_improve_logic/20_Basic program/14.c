/*14.  Print given series .
      1   2   4   7   11   16   22*/

#include <stdio.h>
void main()
{
    int a = 0, i;
    for (i = 1; i <= 22; i = i + a)
    {
        printf("%d ", i);
        a++;
    }
}