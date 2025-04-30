/*14.Print last 3 digit from last.
 i/p1: 96412 o/p1:214
 i/p2: 56725 o/p2:527*/

#include <stdio.h>
void main()
{
    int num, c = 0, r;
    printf("Enter a number :\n");
    scanf("%d", &num);
    printf("last 3 digit is:\n");
    
    for (1; num; num = num / 10)
    {
        r = num % 10;
        c++;
        if (c <= 3)
        {
            printf("%d", r);
        }
    }
}