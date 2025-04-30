/*
WAP to replace every digits which are multiple of 3 with 1 for given int.

Ex:

int num=13456892;

after replacing digit num=11451812

*/

#include <stdio.h>
void main()
{

    int num, rev = 0, r;
    printf("Enter a number :\n");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("After replacing digit num:\n");
        printf("0");
    }
    else if (num > 0)
    {
        for (; num; num = num / 10)
        {
            r = num % 10;
            if (r % 3 == 0)
            {
                r = 1;
            }
            rev = rev * 10 + r;
        }

        printf("After replacing digit num:\n");
        for (; rev; rev = rev / 10)
        {
            r = rev % 10;
            printf("%d", r);
        }
    }
    else
    {
        printf("envalid number.");
    }
}
