/*
9. WAP in C to check given number is palindrome
number or not using do-while loop
*/
#include <stdio.h>
void main()
{
    int num, temp, rev = 0, r;
    printf("Enter a number:\n");
    scanf("%d", &num);
    temp = num;
    for (; temp; temp = temp / 10)
    {
        r = temp % 10;
        rev = rev * 10 + r;
    }
    if (rev ==num)
    {
        printf("number is palidrome.");
    }
    else
    {
        printf("number is not palidrome.");
    }
}