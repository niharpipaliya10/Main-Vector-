/*
23. Print  2nd last   digit  .
i/p1:    96412         o/p1:  1
i/p2:      725          o/p2:  2
*/

#include <stdio.h>
void main()
{
    int num, r, temp, c = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    printf("Print  2nd last  digit: ");
    while (temp)
    {
        r = temp % 10;
        c++;
        if (c == 2)
        {
            printf("%d", r);
        }
        temp = temp / 10;
    }
    // printf("%d\n", rev);
}