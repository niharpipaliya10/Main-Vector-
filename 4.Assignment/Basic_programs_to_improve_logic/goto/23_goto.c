/*23.Print 2ndlast digit .
 i/p1: 96412 o/p1: 1
 i/p2: 725 o/p2: 2*/

#include <stdio.h>
void main()
{
    int num, r1, r2;
    printf("Enter a number :\n ");
    scanf("%d", &num);

    num = num / 10;
    r2 = num % 10;
    printf("printed 2nd last digit is: %d", r2);
}