/*12.Check num is palindrome .*/
#include <stdio.h>
void main()
{

    int num, r,temp, rev = 0;
    printf("Enter a number :\n");
    scanf("%d", &num);
    temp = num;
    for (; num; num = num / 10)
    {
        r = num % 10;
        rev = rev * 10 + r;
    }
    
    if (temp == rev)
    {
        printf("number is palidron.");
    }
    else
    {
        printf("number is not palidron.");
    }
}