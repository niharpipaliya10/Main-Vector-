/*
13. WAP in C to check num is prime or perfect or 
strong or armstrong number using switch case
*/
#include <stdio.h>
void main()
{
    int num, op, i, c = 0, rev, temp, r, sum, mul;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("your number is : %d\n", num);
    if (num >= 0)
    {
        printf("Select the options \n1. prime number \n3. perfect number\n4. armstrong number\n5. strong number\n");
        scanf(" %d", &op);

        printf("your number is %d", num);

        switch (op)
        {
        case 1:
            for (i = 1; i <= num; i++)
            {
                if (num % i == 0)
                {
                    c++;
                }
            }
            if (c == 2)
            {
                printf(" is a prime number\n");
            }
            else
            {
                printf(" not a prime number\n");
            }
            break;
        case 3:
            sum = 0;
            for (i = 1; i < num; i++)
            {
                if (num % i == 0)
                {
                    sum = sum + i;
                }
            }
            if (sum == num)
            {
                printf(" is a perfact number\n");
            }
            else
            {
                printf(" not a perfect number.\n");
            }
            break;
        case 4:
            temp = num;
            sum = 0;
            c = 0;
            for (; temp; temp = temp / 10, c++)
                ;
            temp = num;
            for (; temp; temp = temp / 10)
            {
                r = temp % 10;
                for (i = 1, mul = 1; i <= c; i++)
                {
                    mul = mul * r;
                }
                sum = sum + mul;
            }
            if (sum == num)
            {
                printf(" is a armstrong number\n");
            }
            else
            {
                printf(" not a armstrong number\n");
            }
            break;
        case 5:
            temp = num;
            sum = 0;
            for (; temp; temp = temp / 10)
            {
                r = temp % 10;
                for (i = 1, mul = 1; i <= r; i++)
                {
                    mul = mul * i;
                }
                sum = sum + mul;
            }
            if (sum == num)
            {
                printf(" is a strong number\n");
            }
            else
            {
                printf(" not a strong number\n");
            }
            break;

        default:
            printf(" not valid option\n");
            break;
        }
    }
    else
    {
        printf("invalid number");
    }
}
