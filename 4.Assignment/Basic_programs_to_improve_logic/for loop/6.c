/*6.Count digit in num.
 i/p1: 123 o/p1: 3
 i/p2: 2076 o/p2: 4*/
#include <stdio.h>
void main()
{
    int num, c = 0;
    printf("Enter a number is:\n");
    scanf("%d", &num);
    for (1; num; num = num / 10, c++)
        ;
    printf("count of digit is :%d", c);
}