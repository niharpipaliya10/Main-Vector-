// wap to print palidroms number b/w 1 to 100.
#include <stdio.h>
void main()
{
    int num, temp, r, rev, c = 0;

    for (num = 10; num <= 100; num++)
    {
        for (temp = num, rev = 0; temp; temp = temp / 10)
        {
            r = num % 10;
            rev = rev * 10 + r;
        }
        if (num == rev)
        {
            c++;
            if (c < 6)
                printf(" %d ", num);
        }
    }
    printf("\n%d", c);
}