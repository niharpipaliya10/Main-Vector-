/*17. Reverse odd digit in num.
 i/p1: 963 o/p1:39
 i/p2: 27851 o/p2:157*/

#include <stdio.h>
void main()
{
    int num, r, c = 0, rev = 0;
    printf("Enter a number is : \n");
    scanf("%d", &num);
    for (1; num; num = num / 10)
    {
        r = num % 10;
        if (r % 2 != 0)
        {
            rev = rev * 10 + r;
        }
    }
    printf("reverse odd digit is: %d", rev);
}