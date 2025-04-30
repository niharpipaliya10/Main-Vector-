/*.Delete last 2 digit of num.
 i/p : 4567 o/p: 45*/
#include <stdio.h>
void main()
{
    int num, r;
    printf("Enter a number:\n");
    scanf("%d", &num);
    r = num / 100;
    printf("delete last 2 digit of num :%d", r);
}