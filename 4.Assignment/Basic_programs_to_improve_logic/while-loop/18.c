/*
18.  Reverse  last 2 digit .
i/p1:    963            o/p1:  36
i/p2:    27851        o/p2: 15
*/
#include <stdio.h>
void main()
{
    int num, r, temp, rev = 0, c = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    printf("Reverse last 2 digit in num:  ");
    while (temp && c < 2)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        c++;
        temp = temp / 10;
    }
    printf("%d", rev);
}