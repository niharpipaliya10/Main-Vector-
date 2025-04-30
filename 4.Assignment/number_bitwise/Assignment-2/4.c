/*
4. WAP in C to print factor of number using goto.
*/
#include <stdio.h>
void main()
{
    int num, r, i = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);

l:
    if (i <= num)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
        i++;
        goto l;
    }
}