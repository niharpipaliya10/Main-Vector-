/*27.Sumof 1st and last digit.
 i/p1: 93321 o/p1:10
 i/p2: 277637 o/p2:9*/
#include <stdio.h>
void main()
{
    int num, r1, r2, r3, rev = 0, sum;
    printf("Enter a number is:\n");
    scanf("%d", &num);
    r1 = num % 10;

l1:
    r3 = num % 10;
    rev = rev * 10 + r3;
    num = num / 10;
    if (num != 0)
        goto l1;
    // printf("reverse number is :%d", rev);
    r2 = rev % 10;
    printf("r1=%d\n", r1);
    printf("r2= %d\n", r2);
    sum = r1 + r2;
    printf("sum of 1st digit and last digit is: %d ", sum);

    // printf("sum of 1st and last digit is :%d", sum);
}