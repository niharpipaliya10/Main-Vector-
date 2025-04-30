/*27.Sum of 1st and last digit.
 i/p1: 93321 o/p1:10
 i/p2: 277637 o/p2:9*/
#include <stdio.h>
void main()
{
    int num, r, c = 0, d = 0, sum = 0, temp;
    printf("Enter a number is:\n");
    scanf("%d", &num);
    temp = num;
    for (; temp; temp = temp / 10, c++)
        ;
    for (; num; num = num / 10)
    {
        r = num % 10;
        d++;
        if (d == 1 || d == c)
        {
            sum = sum + r;
        }
    }
    printf("Sum of 1st and  last digit of given any int num is :%d", sum);
}