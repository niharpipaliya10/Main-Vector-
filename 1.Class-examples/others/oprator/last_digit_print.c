// last digit deleting of the given number.
#include <stdio.h>
void main()
{
    int num, r;
    printf("Enter your number.....\n");
    scanf("%d", &num);
    printf("your number %d \n", num);

    r = num % 10;
    printf("your number last digit is %d \n", r);
}
