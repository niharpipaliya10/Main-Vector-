/*24.Print middle digit.
 i/p1: 96412 o/p1: 4
 i/p2: 1725 o/p2: 2/7
 */

#include <stdio.h>
void main()
{
    int num, r1, r2, t, d = 0, c = 0;
    printf("Enter a number is:\n");
    scanf("%d", &num);
    printf("%d\n", num);
    t = num;
l:
    c++;
    t = t / 10;
    if (t!=0)
        goto l;
    printf("%d\n", c);
    t = num;
    if (c % 2 != 0)
    {
    l1:
        r1 = t % 10;
        t = t / 10;
        d++;
        if (d < (c / 2 + 1))
        {
            goto l1;
            printf("%d\n", r1);
        }

        printf("%d\n", r1);
    }
    else
    {
        t = num;
        d = 0;
    l2:
        r2 = t % 10;
        t = t / 10;
        d++;
        if (d <= (c / 2))
        {
            goto l2;
            printf("%d\n", r2);
        }

        printf("%d\n", r2);
    }
}