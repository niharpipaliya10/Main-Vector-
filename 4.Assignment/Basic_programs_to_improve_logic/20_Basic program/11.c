/*11. Reverse number */
#include <stdio.h>
void main()
{

    int num, r, rev = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);

    for (; num; num = num / 10)
    {
        r = num % 10;
        rev = rev * 10 + r;
    }
    printf("reverse the number is:%d\n", rev);
}