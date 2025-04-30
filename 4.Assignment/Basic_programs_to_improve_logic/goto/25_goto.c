/*25.Print 1st odd digit fromend.
 i/p1: 96412 o/p1: 1
 i/p2: 1725 o/p2: 5*/
#include <stdio.h>
void main()
{
    int num, r, c = 0;
    printf("Enter a number :\n ");
    scanf("%d", &num);
l1:
    r = num % 10;
    if (r % 2 != 0)
    {
        printf("printed 2nd last digit is: %d", r);
        c++;
    }
    num = num / 10;
    if (num != 0 && c < 1)
        goto l1;
}