/*
18.  Reverse  last 2 digit .   
i/p1:    963            o/p1:  36  
i/p2:    27851        o/p2: 15

*/
#include <stdio.h>
void main()
{
    int num, r, rev = 0,c=0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    do
    {
        r = num % 10;
            rev = rev * 10 + r;
            c++;
        num = num / 10;
    } while (c<2);
    printf("%d", rev);
}