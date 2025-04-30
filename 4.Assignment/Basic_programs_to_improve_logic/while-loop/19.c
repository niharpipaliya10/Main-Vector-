/*
19.  Reverse  digit more than 5.
i/p1:    963            o/p1:  69
i/p2:    27851        o/p2: 87
*/
#include <stdio.h>
void main()
{
    int num, r, temp, rev = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    printf("Reverse  digit more than in num:  ");
    while (temp)
    {
        r = temp % 10;
        if (r > 5)
            rev = rev * 10 + r;

        temp = temp / 10;
    }
    printf("%d", rev);
}